/* Universidade Estadual do Ceara
Ciencia da Computacao
Introducao a Ciencia da Computacao 2016.2
Prof. Leonardo
Lista de exercicios 3 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main () {
    int v[7], i;

    for (i=0; i<7; i++) {
        printf("v[%d] = ", i);
        scanf(" %d", &v[i]);
    }

    printf("\nMultiplos de 2: ");
    for (i=0; i<7; i++)
        if (v[i]%2==0)
            printf("%d ", v[i]);
    printf("\n");

    printf("Multiplos de 3: ");
    for (i=0; i<7; i++)
        if (v[i]%3==0)
            printf("%d ", v[i]);
    printf("\n");

    printf("Multiplos de 2 e 3: ");
    for (i=0; i<7; i++)
        if (v[i]%2==0 && v[i]%3==0)
            printf("%d ", v[i]);
    printf("\n");
}
