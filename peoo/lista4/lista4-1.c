/* Lista 4 - Questao 1
Suponha que o vetor esteja ordenado em ordem crescente por valor de RG. Implemente uma função de busca por RG, que opera como a busca binária, e que caso exista uma pessoa no cadastro com o RG a ser buscado, devolve o índice deste cadastro e caso não exista o RG a ser buscado, devolve -1. */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Pessoa {
	int rg;
	int cpf;
	char nome[80];
};

// recebe o vetor de struct, o valor do rg e tamanho do vetor
int busca (struct Pessoa *c, int rg, int tam) {
	int ini, meio, fim;
	
	ini = 0; // inicio do intervalo de busca
	fim = tam-1; // fim do intervalo de busca
	
	// enquanto o intervalo eh valido
	while (ini<=fim) {
		// atualiza o valor do meio
		meio = (ini+fim)/2;
		// se achar o rg, retorna o indice
		if (c[meio].rg == rg)
			return meio;
		// senao, checa se fara a busca pela esquerda ou pela direita
		if (c[meio].rg < rg)
			ini = meio+1;
		else
			fim = meio-1;
	}
	
	// se nao encontrar o rg, retorna -1
	return -1;
}

int main () {
	struct Pessoa cadastro[100];
	int x, tam, rg;
	
	// recebe o numero de cadastros
	printf("Digite o numero de cadastros: ");
	scanf("%d", &tam);
	printf("\n");
	
	// recebe os valores do cadastro
	for (int i=0; i<tam; i++) {
		getchar();
		printf("Nome: ");
		fgets(cadastro[i].nome, 79, stdin);
		if (cadastro[i].nome[strlen(cadastro[i].nome)-1] == '\n')
			cadastro[i].nome[strlen(cadastro[i].nome)-1] = '\0';
		printf("RG: ");
		scanf("%d", &cadastro[i].rg);
		printf("CPF: ");
		scanf("%d", &cadastro[i].cpf);
		printf("\n");
	}
	
	// recebe o rg e realiza a busca
	printf("Digite o rg da busca: ");
	scanf("%d", &rg);
	x = busca(cadastro, rg, tam);
	
	// imprime o resultado
	if (x == -1)
		printf("\nRG nao encontrado\n");
	else
		printf("\nRG encontrado no indice: %d\n", x);
	
	return 0;
}
