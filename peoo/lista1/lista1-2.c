/* Lista 1 - Questao 2
Escreva um algoritmo para ordenar quatro palavras de tres letras. */

#include<stdio.h>
#include<string.h>
int main () {
	char v[4][4], aux[4];
	int i, troca=1;

	// recebe as 4 strings, considerando que sejam palavras sem espaco
	printf("Digite 4 palavras de 3 letras: ");
	for (i=0; i<4; i++)
		scanf("%s", v[i]);
	
	// bubble sort
	// percorre o vetor e troca as strings fora da ordem desejada ate que nao hajam mais trocas
	// significando que o vetor esta ordenado
	while (troca) {
		troca = 0;
		for (i=0; i<3; i++)
			if (strcmp(v[i], v[i+1]) > 0) { // se v[i+1] vier antes de v[i], ocorre a troca
				strcpy(aux, v[i]); // a primeira variavel recebe a string da segunda
				strcpy(v[i], v[i+1]);
				strcpy(v[i+1], aux);
				troca = 1;
			}
	}
			
	// imprime as strings em ordem
	printf("Palavras ordenadas: ");
	for (i=0; i<4; i++)
		printf("%s ", v[i]);
	printf("\n");
	
	return 0;
}
