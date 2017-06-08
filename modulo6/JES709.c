/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 709 */

#include<stdio.h>
#include<stdlib.h>
#include<strings.h>

/* Funcao que retorna a soma de duas variaveis double */
double soma (double a, double b) {
    return a+b;
}

/* Funcao que retorna o valor do fatorial de uma variavel double */
double fatorial (double a){
    double fat = 1, i; /* A variavel 'fat' inicia-se em 1 por ser usada para multiplicacao */

    for (i=1; i<=a; i++) {
        fat *= i;
    }

    return fat;
}

/* Funcao principal */
void main () {
    printf("Este programa foi escrito por Jessica Cristina Cacau Patricio.\n\n");

    double som = 0, i;

    for (i=2; i<=10; i++) {
        som = soma(som, fatorial(i)); /* A variavel local 'som', iniciada em 0, originalmente, eh somada com o fatorial
                                        de i, que vai de 2 a 10  e o resultado parcial eh mostrado no printf a cada rodada. */
        printf("Fatorial de %.0lf: %.0lf\t\tSoma parcial: %.0lf.\n", i, fatorial(i), som);
    }
    printf("\nSoma final: %.0lf.\n", som);
}
