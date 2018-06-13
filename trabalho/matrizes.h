/* ----------------- variaveis globais ----------------- */
typedef struct matriz {
    int **m, lin, col; // ponteiro para a matriz e numero de linhas e colunas da matriz
    struct matriz *prox; // ponteiro auxiliar da lista encadeada
} matriz;

matriz *inicio_m; // ponteiro para o inicio da lista de matrizes


/* -------------- declaracao de funcoes -------------- */
void matriz_transposta();
void multiplica_matriz();
/*ok*/ int qtd_matriz();
/*ok*/ matriz* escolher_matriz(int x);
/*ok*/ void soma_matriz();
/*ok*/ void exibir_matrizes();
/*ok*/ matriz* adiciona_matriz(matriz* mat);
/*ok*/ void receber_matriz();


/* ----------------- funcoes / matriz ----------------- */
void matriz_transposta() {
    matriz *m;
    int i, j;

    printf("\t[ MATRIZES ]\n"
           "\t>> Calcular a transposta de uma matriz\n\n");

    if (qtd_matriz() > 0) {
        m = escolher_matriz(3);

        for (i=0; i<m->col; i++) {
            for (j=0; j<m->lin; j++) {
                printf("%d ", m->m[j][i]);
            }
            printf("\n");
        }

    }
    else
        printf("Voce precisa adicionar, no minimo, 1 matriz ao programa primeiro.\n"
               "Selecione a opcao \"1. Ler matrizes\" no menu.");

    pressione_enter();
}

void multiplica_matriz() {
    matriz *m1, *m2;
    int i, j, k, soma;

    printf("\t[ MATRIZES ]\n"
           "\t>> Multiplicacao de duas matrizes\n\n");

    if (qtd_matriz() > 1) {
        m1 = escolher_matriz(1);
        m2 = escolher_matriz(2);

        if (m1->col == m2->lin) {
            int resultado[m1->lin][m2->col];

            for (i=0; i<m1->lin; i++)
                for (j=0; j<m2->col; j++) {
                    soma = 0;
                    for(k=0; k<m1->lin; k++)
                        soma += m1->m[i][k]*m2->m[k][j];
                    resultado[i][j]=soma;
                }

            for (i=0; i<m1->lin; i++) {
                for (j=0; j<m2->col; j++)
                    printf("%d ", resultado[i][j]);
                printf("\n");
            }
            printf("\n");
        }
        else
            printf("O numero de colunas da matriz 1 precisa ser igual ao numero de linhas da matriz 2. Tente novamente.");
    }
    else
        printf("Voce precisa adicionar, no minimo, 2 matrizes ao programa primeiro.\n"
               "Selecione a opcao \"1. Ler matrizes\" no menu.");

    pressione_enter();
}

int qtd_matriz () {
    matriz *aux;
    aux = inicio_m;
    int qtd = 0;

    while (aux != NULL) {
        qtd++;
        aux = aux->prox;
    }

    return qtd;
}

matriz* escolher_matriz(int x) {
    matriz *aux;
    int num = 1, i, j, mat;

    aux = inicio_m;
    while (aux != NULL) {
        printf("%d. m%d =\n", num, num);
        num++;
        for (i=0; i<aux->lin; i++) {
            for (j=0; j<aux->col; j++)
                printf("%d ", aux->m[i][j]);
            printf("\n");
        }
        if (aux->prox != NULL)
            printf("\n");
        aux = aux->prox;
    }

    do {
        if (x == 1)
            printf("\nEscolha a primeira matriz: ", x);
        else
            if (x == 2)
                printf("\nEscolha a segunda matriz: ", x);
            else
                printf("\nEscolha a matriz com a qual deseja trabalhar: ", x);
        scanf(" %d", &mat);
        if (mat<1 || mat>qtd_matriz())
            printf("Opcao invalida.\n");
    } while (mat<1 || mat>qtd_matriz());
    printf("\n");

    aux = inicio_m;
    mat--;
    while (mat--)
        aux = aux->prox;

    return aux;
}

/* soma as matrizes m1 e m2 */
void soma_matriz () {
    int i, j;
    matriz *m1, *m2;

    printf("\t[ MATRIZES ]\n"
           "\t>> Soma de duas matrizes\n\n");

    if (qtd_matriz() > 1) {
        m1 = escolher_matriz(1);
        m2 = escolher_matriz(2);
        if ((m1->lin == m2->lin) && (m1->col == m2->col)) {
            printf("m1 =\n");
            for (i=0; i<m1->lin; i++) {
                for (j=0; j<m1->col; j++)
                    printf("%d ", m1->m[i][j]);
                printf("\n");
            }
            printf("\nm2 =\n");
            for (i=0; i<m2->lin; i++) {
                for (j=0; j<m2->col; j++)
                    printf("%d ", m2->m[i][j]);
                printf("\n");
            }
            printf("\n\nResultado:\nm1 + m2 =\n");
            for (i=0; i<m1->lin; i++) {
                for (j=0; j<m1->col; j++)
                    printf("%d ", m1->m[i][j]+m2->m[i][j]);
                printf("\n");
            }
        }
        else
            printf("As matrizes precisam ter o mesmo tamanho. Tente novamente.");
    }
    else
        printf("Voce precisa adicionar, no minimo, 2 matrizes ao programa primeiro.\n"
               "Selecione a opcao \"1. Ler matrizes\" no menu.");

    pressione_enter();
}

/* printa todas as matrizes adicionadas ate o momento */
void exibir_matrizes () {
    matriz *aux;
    aux = inicio_m;

    printf("\t[ MATRIZES ]\n"
           "\t>> Lista de matrizes\n\n");

    if (aux == NULL)
        printf("Nenhuma matriz foi adicionada ainda.");
    else {
        int num = 1, i, j;
        while (aux != NULL) {
            printf("Matriz %d - %dx%d:\n", num++, aux->lin, aux->col);
            for (i=0; i<aux->lin; i++) {
                for (j=0; j<aux->col; j++)
                    printf("%d ", aux->m[i][j]);
                if (aux->prox != NULL || i+1<aux->lin)
                    printf("\n");
            }
            aux = aux->prox;
            if (aux != NULL)
                printf("\n");
        }
    }

    pressione_enter();
}

/* adiciona a matriz lida na lista */
matriz* adiciona_matriz (matriz* mat) {

    if (inicio_m == NULL) {
        inicio_m = mat;
        mat->prox = NULL;

        return inicio_m;
    }
    else {
        matriz *aux;
        aux = inicio_m;

        while (aux->prox != NULL)
            aux = aux->prox;

        aux->prox = mat;
        mat->prox = NULL;

        return aux;
    }
}

/* recebe numero de linhas e colunas e elementos da matriz */
void receber_matriz () {
    matriz *aux, *add;
    aux = (matriz*)malloc(sizeof(matriz));
    int i, j, op;

    printf("\t[ MATRIZES ]\n"
           "\t>> Ler matrizes\n\n"
           "Digite o numero de linhas da matriz: ");
    scanf(" %d", &aux->lin);
    printf("Digite o numero de colunas da matriz: ");
    scanf(" %d", &aux->col);

    aux->m = (int**)malloc(aux->lin*sizeof(int));
    for (i=0; i<aux->lin; i++)
        aux->m[i] = (int*)malloc(aux->col*sizeof(int));

    printf("\nDigite os valores das posicoes da matriz:\n");
    for (i=0; i<aux->lin; i++) {
        for (j=0; j<aux->col; j++) {
            printf("m[%d][%d] = ", i, j);
            scanf(" %d", &aux->m[i][j]);
        }
    }

    add = adiciona_matriz(aux);
    if (add == NULL)
        printf("\nErro ao adicionar a matriz. Tente novamente.\n\n");
    else
        printf("\nMatriz adicionada com sucesso!\n\n");

    printf("Gostaria de adicionar uma nova matriz?\n"
           "1. Sim\n"
           "2. Nao, desejo voltar ao menu\n");

    do {
        printf("\nEscolha uma opcao: ");
        scanf(" %d", &op);
        if (op<1 || op>2)
            printf("Opcao invalida.");
        printf("\n");
    } while (op<1 || op>2);

    if (op == 1){
        system("cls");
        receber_matriz();
    }
}
