/* Universidade Estadual do Ceara
Ciencia da Computacao
Introducao a Ciencia da Computacao 2016.2
Prof. Leonardo
Lista de exercicios 3 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main () {
    int i, num, cont, j, primo = 0;

    for (i=1; i<=10; i++) {
        printf("Digite o numero inteiro positivo #%d: ", i);
        scanf(" %d", &num);

        cont = 0;
        if (num>=1) {
            for (j=1; j<=num; j++)
                if (num%j==0)
                    cont++;
            if (cont==2)
                primo++;
        }
    }

    printf("\nNumero de valores primos entrados: %d.\n", primo);

}
