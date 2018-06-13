// -------------------------------
// Declaracao de variaveis globais
// -------------------------------

/* Estrutura contendo um ponteiro para o vetor de inteiros que sera inserido pelo usuario, um inteiro
representando o tamanho de tal vetor e um ponteiro auxiliar utilizado na lista encadeada de struct vetor.
Criou-se um novo tipo de dado chamado "vetor" para facilitar nas declaracoes de variaveis. */
typedef struct vetor {
    int *v, elem;
    struct vetor *prox;
} vetor;

/* Ponteiro que contem a primeira celula da lista encadeada. */
vetor *inicio_v;


// ---------------------
// Declaracao de funcoes
// ---------------------

void pressione_enter ();
vetor* escolher_vetor (int x);
int qtd_vetor ();
void produto_escalar ();
void multiplica_vetor ();
void soma_vetor ();
void exibir_vetores ();
vetor* adiciona_vetor (vetor* vet);
void receber_vetor ();

// -------
// Funcoes
// -------

/* Funcao auxiliar exibida ao final de algumas opcoes do menu, como uma substituicao para o system("pause").
Assim, o programa prossegue apenas quando o usuario entra o comando - no caso, pressiona "enter".
Sao utilizados 2 getchar() para o caso de haver "lixo" no buffer do teclado. */
void pressione_enter () {
    printf("\n\nPressione enter para voltar ao menu.\n");
    getchar();
    getchar();
}

/* Percorre a lista encadeada, mostrando na tela cada vetor adicionado ate o momento. Em seguida, pede para
que o usuario selecione o vetor com o qual deseja trabalhar. O valor de x recebido como parametro varia apenas
entre 1 e 3. Dependendo do valor de x, a mensagem mostrada na tela se altera. Se o usuario selecionar um numero
nao correspondente a um dos vetores exibidos no comeco da funcao, aparece uma mensagem de erro e o programa so
prossegue com um numero valido. Apos isso, percorre-se a lista novamente ate o vetor escolhido e um ponteiro
para tal vetor eh retornado. */
vetor* escolher_vetor (int x) {
    vetor *aux;
    int num = 1, i, vet;

    // Exibe os vetores da lista encadeada na tela
    aux = inicio_v;
    while (aux != NULL) {
        printf("%d. v%d = ", num, num);
        num++;
        for (i=0; i<aux->elem; i++)
            printf("%d ", aux->v[i]);
        if (aux->prox != NULL)
            printf("\n");
        aux = aux->prox;
    }

    // Usuario escolhe um dos vetores
    do {
        if (x == 1)
            printf("\nEscolha o primeiro vetor: ");
        else
            if (x == 2)
                printf("\nEscolha o segundo vetor: ");
            else
                printf("\nEscolha o vetor com o qual deseja trabalhar: ");
        scanf(" %d", &vet);
        if (vet<1 || vet>qtd_vetor())
            printf("Opcao invalida.\n");
    } while (vet<1 || vet>qtd_vetor());
    printf("\n");

    // Percorre-se a lista ate o vetor escolhido
    aux = inicio_v;
    vet--;
    while (vet--)
        aux = aux->prox;

    // Retorna o ponteiro para tal vetor
    return aux;
}

/* Percorre a lista encadeada, calcula e retorna o seu numero de celulas. */
int qtd_vetor () {
    vetor *aux;
    aux = inicio_v;
    int qtd = 0;

    // Para cada ponteiro nao-nulo, conta +1 celula
    while (aux != NULL) {
        qtd++;
        aux = aux->prox;
    }

    return qtd;
}

/* Calcula o produto escalar entre dois vetores escolhidos pelo usuario. */
void produto_escalar () {
    int soma = 0, i;
    vetor *v1, *v2;

    printf("\t[ VETORES ]\n"
           "\t>> Produto escalar entre dois vetores\n\n");

    // Se o numero de celulas da lista for maior que 1, significa que 2 vetores ja foram adicionados pelo usuario
    if (qtd_vetor() > 1) {

        // O usuario escolhe 2 desses vetores
        v1 = escolher_vetor(1);
        v2 = escolher_vetor(2);

        // Se eles tiverem tamanhos diferentes, apresenta mensagem de erro
        if (v1->elem != v2->elem)
            printf("Produto escalar impossivel. Vetores de tamanhos diferentes.");

        // Se os tamanhos forem iguais, apresenta os elementos de cada vetor e seu produto escalar em seguida
        else {
            printf("v1 = ");
            for (i=0; i<v1->elem; i++)
                printf("%d ", v1->v[i]);
            printf("\nv2 = ");
            for (i=0; i<v2->elem; i++)
                printf("%d ", v2->v[i]);
            for (i=0; i<v1->elem; i++)
                soma += v1->v[i]*v2->v[i];
            printf("\n\nResultado:\nv1 . v2 = %d", soma);
        }
    }

    // Se nao existirem vetores suficientes adicionados pelo usuario no programa, nao realiza o calculo
    else
        printf("Voce precisa adicionar, no minimo, 2 vetores ao programa primeiro.\n"
               "Selecione a opcao \"1. Ler vetores\" no menu.");

    pressione_enter();
}

/* Multiplica um vetor por um escalar, ambos escolhidos pelo usuario. */
void multiplica_vetor () {
    int i, x;
    vetor *v;

    printf("\t[ VETORES ]\n"
           "\t>> Multiplicacao de vetor por escalar\n\n");

    // Se o numero de celulas da lista for maior que 0, significa que o usuario ja adicionou algum vetor no programa
    if (qtd_vetor() > 0) {

        // O usuario escolhe um dos vetores adicionados por ele
        v = escolher_vetor(3);

        // E em seguida entra o valor do escalar
        printf("Por qual escalar deseja multiplicar o vetor? ");
        scanf(" %d", &x);

        // Sao apresentados os elementos do vetor escolhido e o escalar, seguido do vetor resultado da multiplicacao
        printf("\nv = ");
        for (i=0; i<v->elem; i++)
            printf("%d ", v->v[i]);
        printf("\nx = %d\n\n"
               "Resultado:\nv * %d = ", x, x);
        for (i=0; i<v->elem; i++)
            printf("%d ", v->v[i]*x);
    }

    // Se nenhum vetor tiver sido adicionado pelo usuario ainda, apenas apresenta mensagem de erro e encerra a funcao
    else
        printf("Voce precisa adicionar um vetor ao programa primeiro. Selecione a opcao \"1. Ler vetores\".");

    pressione_enter();
}

/* Calcula a soma de dois vetores escolhidos pelo usuario. */
void soma_vetor () {
    int i;
    vetor *v1, *v2;

    printf("\t[ VETORES ]\n"
           "\t>> Soma de dois vetores\n\n");

    if (qtd_vetor() > 1) {
        v1 = escolher_vetor(1);
        v2 = escolher_vetor(2);
        if (v1->elem == v2->elem) {
            printf("v1 = ");
            for (i=0; i<v1->elem; i++) // imprime v1
                printf("%d ", v1->v[i]);
            printf("\nv2 = ");
            for (i=0; i<v2->elem; i++) // imprime v2
                printf("%d ", v2->v[i]);
            printf("\n\nResultado:\nv1 + v2 = "); // imprime o vetor resultado v1+v2
            for (i=0; i<v1->elem; i++)
                printf("%d ", v1->v[i]+v2->v[i]);
        }
        else
            printf("Os vetores precisam ter o mesmo tamanho. Tente novamente.");
    }
    else
        printf("Voce precisa adicionar, no minimo, 2 vetores ao programa primeiro.\n"
               "Selecione a opcao \"1. Ler vetores\" no menu.");

    pressione_enter();
}

/* exibe na tela todos os vetores lidos */
void exibir_vetores () {
    vetor *aux;
    aux = inicio_v;

    printf("\t[ VETORES ]\n"
           "\t>> Lista de vetores\n\n");
    if (aux == NULL) // se nao houver struct no inicio da lista, ela esta vazia
        printf("Nenhum vetor foi adicionado ainda.");
    else { // se houver, percorre a lista e imprime todos os elementos de todos os vetores
        int num = 1, i;
        while (aux != NULL) { // enquanto o no nao for nulo
            printf("Vetor %d: v[%d] = ", num++, aux->elem);
            for (i=0; i<aux->elem; i++) // imprime os elementos
                printf("%d ", aux->v[i]);
            if (aux->prox != NULL)
                printf("\n");
            aux = aux->prox; // e passa para o proximo da lista
        }
    }

    pressione_enter();
}

/* adiciona o struct do vetor lido na lista encadeada */
vetor* adiciona_vetor (vetor* vet) {

    if (inicio_v == NULL) { // se o ponteiro para o inicio da lista estiver vazio
        inicio_v = vet; // o vetor vira o primeiro da lista
        vet->prox = NULL;

        return inicio_v;
    }
    else { // se ja tiver algum struct na lista
        vetor *aux;
        aux = inicio_v;

        while (aux->prox != NULL) // procura o ultimo struct da lista
            aux = aux->prox;

        aux->prox = vet; // adiciona o struct no final da lista
        vet->prox = NULL;

        return aux->prox;
    }
}

/* recebe o numero de elementos e os valores do novo vetor a ser adicionado pelo usuario */
void receber_vetor () {
    vetor *aux, *add;
    aux = (vetor*)malloc(sizeof(vetor));
    int i, op;

    printf("\t[ VETORES ]\n"
           "\t>> Ler vetores\n\n"
           "Digite o numero de elementos do vetor: ");
    scanf(" %d", &aux->elem);

    aux->v = (int*)malloc(aux->elem*sizeof(int));
    printf("\nDigite os valores das posicoes do vetor:\n\n");
    for (i=0; i<aux->elem; i++) {
        printf("v[%d] = ", i);
        scanf(" %d", &aux->v[i]);
    }

    add = adiciona_vetor(aux);
    if (add == NULL)
        printf("\nErro ao adicionar o vetor. Tente novamente.\n\n");
    else
        printf("\nVetor adicionado com sucesso!\n\n");

    printf("Gostaria de adicionar um novo vetor?\n"
           "1. Sim\n"
           "2. Nao, desejo voltar ao menu\n");

    do {
        printf("\nEscolha uma opcao: ");
        scanf(" %d", &op);
        if (op<1 || op>2)
            printf("Opcao invalida.");
        printf("\n");
    } while (op<1 || op>2);

    if (op == 1) {
        system("cls");
        receber_vetor();
    }
}
