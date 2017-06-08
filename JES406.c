/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)

Exercicio 406
1. Usando a estrutura while, Faça um programa para gerar a tabuada de multiplicar de TODOS os números, iniciando em 1, até o número inteiro entrado pelo teclado;
2. Ou seja, se voce entrar com 7, deverá aparecer na sequencia (1 * 1 = 1, 1 * 2 = 2,... e assim por diante até 10. Depois começa tudo de novo com 2 - (2 * 1 = 2, 2 * 2 = 4,... e assim por diante até 10. Depois vai para 3 - (3 * 1 = 3, 3 * 2 = 6,... e assim por diante até 10.
3. Parar quando atingir o número entrado pelo teclado.
4. Compile e execute. */

#include<stdlib.h>
#include<stdio.h>
#include<strings.h>

void main () {
    printf("Este programa foi feito por Jessica Cristina Cacau Patricio.\n\n");

    /* variaveis */
    int num, cont=1, cont2;

    /* instrucoes */
    printf("Digite um numero inteiro:\n");
    scanf("%d", &num); //recebe um inteiro

    while (cont<=num) { //faz a contagem ate o inteiro recebido
        cont2 = 1;
        while (cont2<=10) { //e multiplica ate 10, um por um
            printf("%d * %d = %d\n", cont, cont2, cont*cont2);
            cont2++;
        }
        cont++;
    }
}
