/* Universidade Estadual do Ceara
Ciencia da Computacao
Introducao a Ciencia da Computacao 2016.2
Prof. Leonardo
Lista de exercicios 2 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void main () {
    int num;

    printf("Digite um inteiro: ");
    scanf("%d", &num);

    if (num%2==0)
        printf("\nRaiz quadrada aproximada de %d: %.2f.\n", num, sqrt(num));
    else
        printf("\nQuadrado de %d: %d.\n", num, num*num);
}
