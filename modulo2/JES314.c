/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 314 */

#include<stdlib.h>
#include<stdio.h>
#include<strings.h>

void main () {
    int a, b, c, maior, meio, menor;

    printf("Digite 3 inteiros distintos: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a>b && a>c) {
        maior = a;
        if (b<c) {
            menor = b;
            meio = c;
        }
        else {
            menor = c;
            meio = b;
        }
    }
    else {
        if (b>a && b>c) {
            maior = b;
            if (a<c) {
                menor = a;
                meio = c;
            }
            else {
                menor = c;
                meio = a;
            }
        }
        else {
            maior = c;
            if (a<b) {
                menor = a;
                meio = b;
            }
            else {
                menor = b;
                meio = a;
            }
        }
    }

    printf("Ordem ascendente: %d %d %d\n", menor, meio, maior);

}
