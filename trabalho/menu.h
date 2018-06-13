/* -------------- declaracao de funcoes -------------- */
void menu_matriz();
/*ok*/ void menu_vetor();
/*ok*/ void menu();

/* ------------------ funcoes / menu ------------------ */
/* menu de operacoes com matrizes */
void menu_matriz() {
    system("cls");

    int op;
    matriz *m1, *m2;

    printf("\t[ MATRIZES ]\n"
           "1. Ler matrizes\n"
           "2. Somar duas matrizes\n"
           "3. Multiplicar duas matrizes\n"
           "4. Calcular a transposta de uma matriz\n"
           "5. Calcular o determinante de uma matriz\n"
           "6. Verificar se a matriz eh simetrica\n"
           "7. Exibir lista de matrizes lidas\n"
           "8. Voltar ao menu anterior\n"
           "9. Sair do programa\n");
    do {
        printf("\nEscolha uma opcao: ");
        scanf(" %d", &op);
        if (op<1 || op>9)
            printf("Opcao invalida.");
        printf("\n");
    } while (op<1 || op>9);

    switch (op) {
        case 1:
            system("cls");
            receber_matriz();
            menu_matriz();
            break;
        case 2:
            system("cls");
            soma_matriz();
            menu_matriz();
            break;
        case 3:
            system("cls");
            multiplica_matriz();
            menu_matriz();
            break;
        case 4:
            system("cls");
            matriz_transposta();
            menu_matriz();
            break;
        case 5:
            system("cls");
            menu_matriz();
            break;
        case 6:
            system("cls");
            menu_matriz();
            break;
        case 7:
            system("cls");
            exibir_matrizes();
            menu_matriz();
            break;
        case 8:
            menu();
            break;
        case 9:
            exit(1);
    }
}

/* menu de operacoes com vetores */
void menu_vetor() {
    system("cls");

    int op;

    printf("\t[ VETORES ]\n"
           "1. Ler vetores\n"
           "2. Somar dois vetores\n"
           "3. Multiplicar um dos vetores por um escalar\n"
           "4. Realizar o produto escalar entre dois vetores\n"
           "5. Exibir lista de vetores lidos\n"
           "6. Voltar ao menu anterior\n"
           "7. Sair do programa\n");
    do {
        printf("\nEscolha uma opcao: ");
        scanf(" %d", &op);
        if (op<1 || op>7)
            printf("Opcao invalida.");
        printf("\n");
    } while (op<1 || op>7);

    switch (op) {
        case 1:
            system("cls");
            receber_vetor();
            menu_vetor();
            break;
        case 2:
            system("cls");
            soma_vetor();
            menu_vetor();
            break;
        case 3:
            system("cls");
            multiplica_vetor();
            menu_vetor();
            break;
        case 4:
            system("cls");
            produto_escalar();
            menu_vetor();
            break;
        case 5:
            system("cls");
            exibir_vetores();
            menu_vetor();
            break;
        case 6:
            menu();
            break;
        case 7:
            exit(1);
    }
}

/* menu principal */
void menu () {
    system("cls");

    int op;

    printf("\t[ MENU ]\n"
           "1. Operacoes com vetores\n"
           "2. Operacoes com matrizes\n"
           "3. Sair do programa\n\n");
    do {
        printf("Escolha uma opcao: ");
        scanf(" %d", &op);
        if (op<1 || op>3)
            printf("Opcao invalida.\n");
        printf("\n");
    } while (op<1 || op>3);

    switch (op) {
        case 1:
            menu_vetor();
            menu();
            break;
        case 2:
            menu_matriz();
            menu();
            break;
        case 3:
            exit(1);
    }
}
