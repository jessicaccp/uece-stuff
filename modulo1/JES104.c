/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 104 */

#include<stdlib.h>
#include<stdio.h>
#include<strings.h>

void main () {
    int a;
    char b[] = "Jessica Cristina Cacau Patricio";
    float c;
    double d;

    printf("Tamanho do int: %d\n"
           "Tamanho da string: %d\n"
           "Tamanho do float: %d\n"
           "Tamanho do double: %d\n"
           "Produto: %d\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d), sizeof(a)*sizeof(b)*sizeof(c)*sizeof(d));
}
