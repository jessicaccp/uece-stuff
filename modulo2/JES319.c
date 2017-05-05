/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 319 */

#include<stdlib.h>
#include<stdio.h>
#include<strings.h>

void main () {
    printf("Este programa foi feito por Jessica Cristina Cacau Patricio.\n\n");

    int x, y, intx, inty;

    intx = inty = 0; /* marca 0 para dizer que a variavel x ou y nao esta num dos intervalos e 1 para dizer que esta */
    printf("Digite 2 valores inteiros x e y: ");
    scanf("%d %d", &x, &y);

    if ((x>-20 && x<=-10) || (x>0 && x<=10) || (x>50))
        intx = 1;
    if ((y>-50 && y<=-20) || (y>=0 && y<=10) || (y>20 && y<=50))
        inty = 1;

    if ((intx==0 && inty==1) || (intx==1 && inty==0))
        printf("\nValores validos.\n");
    else
        printf("\nValores invalidos.\n");
}
