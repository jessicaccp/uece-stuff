/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 312 */

#include<stdlib.h>
#include<stdio.h>
#include<strings.h>

void main () {
    int a, b, c, meio;

    printf("Digite 3 inteiros distintos: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a>b && a<c) || (a<b && a>c))
        meio = a;
    else
        if ((b>a && b<c) || (b<a && b>c))
            meio = b;
        else
            meio = c;

    printf("O numero do meio eh o %d\n", meio);

}
