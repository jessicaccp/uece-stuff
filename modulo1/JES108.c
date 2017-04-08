/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 108 */

#include<stdlib.h>
#include<stdio.h>
#include<strings.h>

void main () {
    int num = 90674, aux;

    printf("O numero eh: %d\n", num);
    aux = num/100;
    printf("Dividimos o numero por 100 e resulta em: %d\n", aux);
    aux = aux%10;
    printf("O resto da divisao do numero acima por 10 eh igual a: %d\n", aux);
}
