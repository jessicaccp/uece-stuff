/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)

Exercicio 316 */

#include<stdio.h>
#include<stdlib.h>
#include<strings.h>

void main () {

    printf("Digite o valor de X: ");
    scanf("%d", &x);

    if ((x>=-50 && x<-20) || (x>=-10 && x<0) || (x>=10 && x<50))
        printf("Variavel valida.\n");
    else
        printf("Variavel invalida.\n");
}
