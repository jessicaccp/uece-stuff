/* Universidade Estadual do Ceara
Ciencia da Computacao
Introducao a Ciencia da Computacao 2016.2
Prof. Leonardo
Lista de exercicios 3 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main () {
    int v[15], i, j, cont, primos = 0, aux = 0;

    for (i=0; i<15; i++) {
        printf("v[%d] = ", i);
        scanf(" %d", &v[i]);
    }

    for (i=0; i<15; i++) {
        cont = 0;
        for (j=1; j<=v[i]/2; j++) {
            if (v[i]%j==0)
                cont++;
        }
        if (cont==1)
            primos++;
    }
    int r[primos];

    for (i=0; i<15; i++) {
        cont = 0;
        for (j=1; j<=v[i]/2; j++) {
            if (v[i]%j==0)
                cont++;
        }
        if (cont==1) {
            r[aux] = v[i];
            aux++;
        }
    }

    printf("\nNumeros primos: ");
    for (i=0; i<primos; i++)
        printf("%d ", r[i]);
    printf("\n");
}
