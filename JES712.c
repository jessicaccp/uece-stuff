/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 712 */

#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include<math.h>

/* Funcao recursiva do somatorio */
double som (double a) {
    if (a>0) /* Para maiores de zero, o resultado eh o proprio valor mais o somatorio do seu antecessor */
        return a+som(a-1);
    else /* Para zero, seu somatorio eh ele mesmo */
        return 0;
}

/* Funcao recursiva do fatorial */
double fat (double a) {
    if (a>0) /* Para maiores de zero, o resultado eh a multiplicacao do proprio valor pelo fatorial do seu antecessor */
        return a*fat(a-1);
    else /* Fatorial de 0 eh igual a 1 */
        return 1;
}

/* Funcao principal */
void main () {
    printf("Este programa foi escrito por Jessica Cristina Cacau Patricio.\n\n");

    /* Declaracao das variaveis */
    double num, total = 0.0;
    long long int i;

    printf("Digite um inteiro positivo: ");
    scanf("%lf", &num);

    for (i=1; i<=num; i++) {
        if (i%2==0) /* Se for par, vai subtrair a divisão do valor total */
            total -= som(i)/fat(i);
        else /* Se for impar, vai somar */
            total += som(i)/fat(i);
    }

    printf("\nTotal = %.15lf\n", total);
}
