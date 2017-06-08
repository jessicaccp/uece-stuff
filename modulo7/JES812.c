/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 812 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main () {
    char linha[80], a;
    int i=0;
    FILE *fp;
    fp = fopen("dados.txt", "rt");

    while(1) {
        fscanf(fp, "%c", &a);
        if (a == '\n') {
            linha[i] = '\0';
            break;
        }
        linha[i] = a;
        i++;
    }
    printf("%s\n", linha);

    fclose(fp);
    return 1;
}
