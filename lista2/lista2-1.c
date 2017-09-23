/* Lista 2 - Questao 1
Faça uma funcao recursiva que identifique o elemento maximo em um vetor. */

#include<stdio.h>

// recebe ponteiro para o inicio do vetor, tamanho do vetor e indice a ser checado
int maxi (int *v, int tam, int i) {

	// se for o ultimo indice do vetor, retorna ele mesmo
	if (i+1 == tam)
		return v[i];
		
	// se nao for, chama a funcao para o proximo indice
	// e retorna o valor obtido, caso seja maior que o indice atual
	int m = maxi(v, tam, i+1);
	if (m > v[i])
		return m;
	
	// senao, retorna o valor do indice atual
	return v[i];
}

int main () {
	int tam, i;

	// recebe o tamanho do vetor
	printf("Digite o numero de elementos do seu vetor: ");
	scanf("%d", &tam);
	
	// cria o vetor do tamanho desejado e recebe seus valores
	int v[tam];
	printf("Digite os %d valores do vetor: ", tam);
	for (i=0; i<tam; i++)
		scanf("%d", v+i);
		
	// chama a funcao e imprime o resultado
	printf("Elemento maximo do vetor: %d\n", maxi(v, tam, 0));
	
	return 0;
}
