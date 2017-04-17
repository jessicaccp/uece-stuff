/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 307 */

#include<stdlib.h>
#include<stdio.h>
#include<strings.h>

void main () {
    double salario;

    printf("Digite o valor do salario (somente numeros, use ponto ao inves de virgula): ");
    scanf("%lf", &salario);

    if (salario<=0)
        printf("Valor invalido\n");
    else
        if (salario>1000)
            printf("Imposto a ser recolhido: R$%.2lf\n", salario*0.1);
        else
            printf("Imposto a ser recolhido: R$%.2lf\n", salario*0.05);
}
