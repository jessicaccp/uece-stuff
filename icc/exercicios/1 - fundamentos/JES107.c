/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 107 */

#include<stdlib.h>
#include<stdio.h>
#include<strings.h>

void main () {
    int num1 = 895647, num2 = 3487, num3, num4;

    num3 = num1%num2;
    num4 = num1/num2;

    printf("Dividendo: %d\n"
           "Divisor: %d\n"
           "Quociente: %d\n"
           "Resto: %d\n", num1, num2, num4, num3);
}
