/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 305 */

#include<stdlib.h>
#include<stdio.h>
#include<strings.h>

void main () {
    float salario;

    printf("Digite o salario em reais, usando ponto ao inves de virgula: ");
    scanf("%f", &salario);

    printf("\nSalario original: R$ %.2f\n", salario);
    if (salario<10000)
        salario+=1000;
    printf("Salario final: R$ %.2f\n", salario);
}
