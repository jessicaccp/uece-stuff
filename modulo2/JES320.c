/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 320 */

#include<stdio.h>
#include<stdlib.h>
#include<strings.h>

void main () {
    char letra;

    printf("Digite a primeira letra do seu nome: ");
    scanf("%c", &letra);

    switch (letra) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("A primeira letra eh do tipo vogal.\n");
            break;
        case 'r':
        case 'R':
        case 's':
        case 'S':
            printf("A primeira letra eh do tipo consoante fricativa.\n");
            break;
        case 'p':
        case 'P':
        case 'b':
        case 'B':
            printf("A primeira letra eh do tipo consoante bilabial.\n");
            break;
        case 'm':
        case 'M':
        case 'n':
        case 'N':
            printf("A primeira letra eh do tipo consoante linguodental.\n");
            break;
    }

}
