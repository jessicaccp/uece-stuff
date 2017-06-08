/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 811 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int fibo (int n) {
    if (n==1)
        return 0;
    if (n==2)
        return 1;
    if (n>2)
        return fibo(n-1)+fibo(n-2);
}

int primo (int n) {
    int i, cont=0;

    for (i=1; i<=n/2; i++) {
        if (n%i==0)
            cont++;
        if (cont>1)
            break;
    }

    if (cont>1 || n<2)
        return 0; // nao eh primo
    return 1; //eh primo
}

int main () {
    FILE *fp;
    int aux=1, fib;

    fp = fopen("primos.txt", "wt");
    if (fp == NULL) {
        printf("Erro na abertura do arquivo. Tente novamente.\n");
        return 0;
    }

    while (1) {
        fib = fibo(aux);
        if (fib>=5000)
            break;
        if (primo(fib) == 1) {
            fprintf(fp, "%d\n", fib);
            printf("%d eh primo.\n", fib);
        }
        aux++;
    }
    fclose(fp);
    return 1;
}
