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
    float n1, n2, n3, me, ma;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf(" %f", &n2);
    printf("Digite a terceira nota: ");
    scanf(" %f", &n3);

    me = (n1+n2+n3)/3.0;
    ma = (n1+2*n2+3*n3+me)/7.0;

    printf("\nMedia de aproveitamento: %.2f.\n", ma);
    if (ma>=9)
        printf("Conceito A.\n");
    else
        if (ma>=7.5)
            printf("Conceito B.\n");
        else
            if (ma>=6)
               printf("Conceito C.\n");
            else
                if (ma>=4)
                    printf("Conceito D.\n");
                else
                    printf("Conceito E.\n");
}
