/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 610 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main () {

int n[20];
int i=0,c=0,aux=0,k;
printf("intervalo da rand: [0,%d]\n",RAND_MAX);
printf("\nVETOR INICIAL DESORDENADO\n\n");
for(i=0;i<20;i++) {n[i]= rand()%1000;printf("%d\t",n[i]);}
getchar();
// CARGA DE 20 NUMEROS ALEATORIOS entre 0 e 1000


// CLASSIFICACAO PELO METODO DA FORÇA BRUTA


// MOSTRA TODOS OS ELEMENTOS DO VETOR
printf("\nVETOR ORDENADO\n\n");
for (i=0;i<20;i++){printf("%d\t",n[i]);}
printf("\nQuantidade de PASSAGENS pelos Lacos==>%d\n",c);
getchar();


}
