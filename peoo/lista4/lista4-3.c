/* Lista 4 - Questao 3
Crie uma função que receba como parâmetros dois vetores de inteiros, v1 e v2, e as suas respectivas quantidades de elementos, n1 e n2. A função deverá retornar um ponteiro para um terceiro vetor, v3, com capacidade para (n1 + n2) elementos, alocado dinamicamente, contendo a união de v1 e v2. Por exemplo, se v1 = {11, 13, 45, 7} e v2 = {24, 4, 16, 81, 10, 12}, v3 irá conter {11, 13, 45, 7, 24, 4, 16, 81, 10, 12}. */

#include<stdio.h>
#include<stdlib.h>

// parametros: vetor 1, tamanho do vetor 1, vetor 2, tamanho do vetor 2
int* uniao (int *v1, int t1, int *v2, int t2) {
	int *v3;
	
	// aloca espaço para o terceiro vetor
	v3 = malloc((t1+t2)*sizeof(int));
	
	// os primeiros t1 valores sao os valores do vetor 1
	for (int i=0; i<t1; i++)
		v3[i] = *(v1+i);
		
	// os proximos t2 valores sao os valores do vetor 2
	for (int i=0; i<t2; i++)
		v3[t1+i] = *(v2+i);
	
	// retorna o ponteiro para o novo vetor
	return v3;
}

int main () {
	int t1, t2, *v3;
	
	// recebe o tamanho e valores do primeiro vetor
	printf("Digite o tamanho do primeiro vetor: ");
	scanf("%d", &t1);
	int *v1 = malloc(t1*sizeof(int));
	printf("Digite os %d valores do primeiro vetor: ", t1);
	for (int i=0; i<t1; i++)
		scanf("%d", &v1[i]);
		
	// recebe tamanho e valores do segundo vetor
	printf("Digite o tamanho do segundo vetor: ");
	scanf("%d", &t2);
	int *v2 = malloc(t2*sizeof(int));
	printf("Digite os %d valores do segundo vetor: ", t2);
	for (int i=0; i<t2; i++)
		scanf("%d", &v2[i]);
		
	// chama a funcao e recebe o ponteiro para o terceiro vetor
	v3 = uniao(v1, t1, v2, t2);
	
	// imprime os valores do terceiro vetor
	printf("Valores do terceiro vetor: ");
	for (int i=0; i<t1+t2; i++)
		printf("%d ", *(v3+i));
	printf("\n");

	return 0;
}
