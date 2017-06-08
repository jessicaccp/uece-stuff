/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)

Exercicio 513 */

#include<stdio.h>
#include<stdlib.h>
#include<strings.h>

void main () {
    printf("Este programa foi escrito por Jessica Cristina Cacau Patricio.\n\n");

    float notas[6][5];
    int i, j;

    // dando valores a matriz e apresentando as notas originais
    printf("           Notas originais\n"
           "           Nota 1  Nota 2  Nota 3  Nota 4  Nota 5\n");
    for (i=0; i<6; i++) {
        for (j=0; j<5; j++) {
            notas[i][j] = rand()%10;
            if (j==0)
                printf("Aluno %d  -  %.1f", i+1, notas[i][j]);
            else
                printf("  -  %.1f", notas[i][j]);
        }
        printf("\n");
    }

    // alterando as notas
    printf("\n           Notas alteradas\n"
           "           Nota 1  Nota 2  Nota 3  Nota 4  Nota 5\n");
    for (i=0; i<6; i++) {
        for (j=0; j<5; j++) {

            // desconto na segunda prova
            if (j==1) {
                notas[i][j] -= 1.0;
                if (notas[i][j]<0)
                    notas[i][j] = 0.0;
            }

            // bonus na quinta prova
            if (j==4) {
                notas[i][j] += 1.5;
                if (notas[i][j] > 10)
                    notas[i][j] = 10.0;
            }

            // desconto no quarto aluno
            if (i==3) {
                notas[i][j] -= 2.0;
                if (notas[i][j]<0)
                    notas[i][j] = 0.0;
            }

            if (j==0)
                printf("Aluno %d  -  %.1f", i+1, notas[i][j]);
            else
                printf("  -  %.1f", notas[i][j]);
        }
        printf("\n");
    }

    getchar();
}
