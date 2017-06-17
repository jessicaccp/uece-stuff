/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 111 */

#include<stdlib.h>
#include<stdio.h>
#include<strings.h>

void main () {
    int i=0;

    printf("impressao dos valores de I %d\n",i++);  // soma-se 1 ao valor, mas so aparece depois desse printf
    printf("impressao dos valores de I %d\n",++i);  // soma-se 1 ao valor e ja aparece o valor atualizado nesse printf
    printf("impressao dos valores de I %d\n",i--);  // subtrai-se 1 do valor, mas so aparece depois desse printf
    printf("impressao dos valores de I %d\n",--i);  // subtrai-se 1 do valor e ja aparece o valor atualizado nesse printf
}
