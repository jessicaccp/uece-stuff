/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)

Exercicio 514 */

#include<stdio.h>
#include<stdlib.h>
#include<strings.h>

void main () {
    printf("Este programa foi escrito por Jessica Cristina Cacau Patricio.\n\n");

    float M[10][10];
    int i, j;

    // dando valores a matriz
    for (i=0; i<10; i++) {
        for (j=0; j<10; j++) {
            // diagonal inferior
            if (i>j)
                M[i][j] = i*j;

            // diagonal superior
            if (i<j)
                M[i][j] = (j+1)/(i+1);

            // diagonal principal
            if (i==j)
                M[i][j] = 10;
        }
    }

    // mostrando a matriz
    printf("\n\tApresentando UMA MATRIZ\n\n");
    for (i=0; i<10; i++){
        for (j=0; j<10; j++){
            printf(" %3.1f\t", M[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    getchar();
}
