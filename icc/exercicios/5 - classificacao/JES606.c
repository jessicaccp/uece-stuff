/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 606 */

#include<stdio.h>
#include<stdlib.h>
#include<strings.h>

void main () {
    printf("Programa escrito por Jessica Cristina Cacau Patricio.\n\n");

    int fibo[40], num, i, inf, sup, meio;

    /*  Declaracao do vetor - inicializam-se as duas primeiras posicoes manualmente
        para a utilizacao da lei de formacao dentro do laco de repeticao */
    fibo[0] = 0;
    fibo[1] = 1;
    for (i=2; i<40; i++) {
        fibo[i] = fibo[i-1]+fibo[i-2];
    }

    /*  Utiliza-se o do-while para repetir o bloco no minimo 1x, no caso de o valor
        recebido ser zero */
    do {
        printf("Digite um numero inteiro: ");
        scanf("%d", &num);

        /*  Pesquisa binaria */
        inf = 0;
        sup = (sizeof(fibo)/4)-1;

        /*  Vai rodar enquanto inf nao for maior que sup */
        while (inf<=sup) {
            meio = (sup+inf)/2;

            /*  Elemento encontrado */
            if (fibo[meio] == num) {
                printf("O numero %d esta na posicao %d.\n\n", num, meio);
                inf = sup+1; /* inf torna-se maior que sup para sair do laco de repeticao */
            }
            else {
                if (fibo[meio] < num)
                    inf = meio+1;
                else
                    sup = meio-1;

                /*  Elemento nao encontrado */
                if (inf>sup)
                    printf("O numero %d nao se encontra na serie.\n\n", num);
            }
        }
    }
    while (num!=0); /* O laco acaba quando o numero recebido for zero */
}
