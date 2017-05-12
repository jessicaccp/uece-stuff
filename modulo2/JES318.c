/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)

Exercicio 318 */

#include<stdio.h>
#include<stdlib.h>
#include<strings.h>

void main () {

    printf("Digite os valores de X e Y: ");
    scanf("%d %d", &x, &y);

    if (((x>-20 && x<=-10) || (x>0 && x<=10) || (x>50)) && ((y>-50 && <=-20) || (y>=0 && y<=10) || (y>20 && y<=50)))
        printf("Variaveis invalidas.\n");
    else
        printf("Variaveis validas.\n");
}
