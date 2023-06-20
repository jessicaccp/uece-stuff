/* Lista 2 - Questao 4
Escreva uma funcao que receba um vetor como parametro e retorne:
(i) 1, se o vetor estiver ordenado em ordem crescente;
(ii) -1, se o vetor estiver ordenado em ordem decrescente; e
(iii) 0 se o vetor não estiver ordenado. */

#include<stdio.h>
int ord (int *v, int tam) {
	int i=1, x;
	
	// procura os dois primeiros valores distintos do vetor
	// e checa se estao em ordem crescente ou decrescente
	do {
		if (v[i] != v[0])
			if (v[0] < v[i])
				x = 1; // crescente
			else
				x = -1; // decrescente
	} while (v[0] == v[i]);
	
	// checa se o vetor esta todo na ordem checada anteriormente
	// se nao estiver, x = 0
	for (i=0; i<tam-1; i++) {
		if (x==1 && v[i]>v[i+1])
			x = 0; // nao ordenado
		else if (x==-1 && v[i]<v[i+1])
			x = 0;
		// se descobrir que nao esta ordenado, sai do laco
		if (x==0)
			break;
	}
			
	return x;
}

int main () {
	int i, tam, x;
	
	// recebe o tamanho do vetor
	printf("Digite o tamanho do seu vetor: ");
	scanf("%d", &tam);
	
	// declara o vetor e recebe seus elementos
	int v[tam];
	printf("Digite os %d elementos do seu vetor: ", tam);
	for (i=0; i<tam; i++)
		scanf("%d", v+i);
	
	// chama a funcao e imprime o resultado de acordo com o valor obtido
	x = ord(v, tam);
	
	if (x == 1)
		printf("Ordem crescente\n");
	else if (x == -1)
		printf("Ordem decrescente\n");
	else
		printf("Nao ordenado\n");

	return 0;
}
