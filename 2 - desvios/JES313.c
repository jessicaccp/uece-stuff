/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 313 */

#include<stdlib.h>
#include<stdio.h>
#include<strings.h>

void main () {
    int a, b, c, maior, menor;

    printf("Digite 3 inteiros distintos: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a>b && a>c) {
        maior = a;
        if (b<c)
            menor = b;
        else
            menor = c;
    }
    else {
        if (b>a && b>c) {
            maior = b;
            if (a<c)
                menor = a;
            else
                menor = c;
        }
        else {
            maior = c;
            if (a<b)
                menor = a;
            else
                menor = b;
        }
    }

    printf("O maior numero eh %d e o menor eh %d\n", maior, menor);

}
