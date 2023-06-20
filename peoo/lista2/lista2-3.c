/* Lista 2 - Questao 3
Faça uma funcao que receba como parametros um vetor de inteiros e o tamanho
logico do vetor e modifique este vetor de maneira que todos os numeros divisiveis
por 2 ocorram antes dos numeros nao divisiveis por 2. */

#include<stdio.h>
void ord (int *v, int tam) {
	int j, aux, troca=1;
	
	// bubble sort
	// enquanto o vetor nao estiver ordenado, continua realizando as trocas
	// no caso, o vetor esta ordenado quando os pares vierem primeiro
	while (troca) {
		troca = 0;
		for (j=1; j<tam; j++)
			if (v[j]%2==0 && v[j-1]%2!=0) {
				aux = v[j];
				v[j] = v[j-1];
				v[j-1] = aux;
				troca = 1;
			}
	}
}

int main () {
	int i, tam;

	// recebe o tamanho do vetor
	printf("Digite o tamanho do seu vetor de inteiros: ");
	scanf("%d", &tam);
	
	// declara o vetor e recebe os valores
	int v[tam];
	printf("Digite os %d valores do seu vetor: ", tam);
	for (i=0; i<tam; i++)
		scanf("%d", v+i);
	
	// chama a funcao que ordena o vetor e o imprime
	ord(v, tam);
	printf("Vetor ordenado: ");
	for (i=0; i<tam; i++)
		printf("%d ", v[i]);
	printf("\n");
	
	return 0;
}
