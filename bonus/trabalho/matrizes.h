/* ----------------- variaveis globais ----------------- */
typedef struct matriz {
    int **m, lin, col; // ponteiro para a matriz e numero de linhas e colunas da matriz
    struct matriz *ant, *prox; // ponteiros auxiliares da lista encadeada
} matriz;

matriz *inicio_m; // ponteiro para o inicio da lista de matrizes

void receber_matriz () {
    matriz *aux;
    aux = (matriz*)malloc(sizeof(matriz));
    int i, j;

    printf("Digite o numero de linhas da matriz: ");
    scanf(" %d", &aux->lin);
    printf("Digite o numero de colunas da matriz: ");
    scanf(" %d", &aux->col);

    aux->m = (int**)malloc(aux->lin*sizeof(int));
    for (i=0; i<aux->lin; i++)
        aux->m[i] = (int*)malloc(aux->col*sizeof(int));

    printf("\nDigite os valores das posicoes da matriz:\n");
    for (i=0; i<aux->lin; i++) {
        for (j=0; j<aux->col; j++) {
            printf("v[%d][%d] = ", i, j);
            scanf(" %d", &aux->m[i][j]);
        }
    }
    printf("\n");

    for (i=0; i<aux->lin; i++) {
        for (j=0; j<aux->col; j++) {
            printf("v[%d][%d] = %d\n", i, j, aux->m[i][j]);
        }
    }
}
