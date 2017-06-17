/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 609 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main () {
    int V[10] = {41, 17, 23, 83, 73, 95, 6, 2, 89, 53}, i, maior, menor, maipos, menpos;

    for (i=0; i<10; i++) {
        if (i==0) {
            maior = V[i];
            maipos = i;
            menor = V[i];
            menpos = i;
        }
        else {
            if (V[i]>maior) {
                maior = V[i];
                maipos = i;
            }
            if (V[i]<menor) {
                menor = V[i];
                menpos = i;
            }
        }
    }

    printf("Vetor: ");
    for (i=0; i<10; i++)
        if (i!=9)
            printf("%d ", V[i]);
        else
            printf("%d\n", V[i]);
    printf("Menor: %d. Posicao: %d.\n"
           "Maior: %d. Posicao: %d.\n", menor, menpos, maior, maipos);
}
