/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 112 */

#include<stdlib.h>
#include<stdio.h>
#include<strings.h>

void main () {
    int a = 49, b = 38, c;

    printf("a = 0x%x = %d, b = 0x%x = %d\n", a, a, b, b);
    c = a&b;
    printf("a & b = 0x%x = %d\n", c, c);
    c = a|b;
    printf("a | b = 0x%x = %d\n", c, c);
    c = a^b;
    printf("a ^ b = 0x%x = %d\n", c, c);
    c = ~a;
    printf("~a = 0x%x = %d\n", c, c);
    c = a<<1;
    printf("a << 1 = 0x%x = %d\n", c, c);
    c = a>>1;
    printf("a >> 1 = 0x%x = %d\n", c, c);
}
