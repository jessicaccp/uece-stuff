/* Lista 4 - Questao 2
Implemente um algoritmo que receba um vetor de Datas como parâmetro e que retorne as datas em ordem cronológica (crie uma função com cabeçalho: void ordena(struct Data vet[], int tam). */

#include<stdio.h>
#include<stdlib.h>

struct Data {
	int dia;
	int mes;
	int ano;
};

// recebe os ponteiros para os elementos do vetor
int troca(struct Data *v1, struct Data *v2) {
	struct Data aux;
	
	aux = *v1; // auxiliar recebe o conteudo de v1
	*v1 = *v2; // conteudo de v1 recebe conteudo de v2
	*v2 = aux; // conteudo de v2 recebe auxiliar
	
	// retorna 1 para setar que houve a troca
	return 1;
}

void ordena (struct Data *vet, int tam) {
	int trocou = 1, ano, dia, mes;
	struct Data aux;
	
	while (trocou) {
		trocou = 0;
		for (int i=0; i<tam-1; i++) {
			ano = (vet[i].ano > vet[i+1].ano);
			mes = (vet[i].ano == vet[i+1].ano && vet[i].mes > vet[i+1].mes);
			dia = (vet[i].ano == vet[i+1].ano && vet[i].mes == vet[i+1].mes && vet[i].dia > vet[i+1].dia);
	
			if (ano || mes || dia) 
				trocou = troca(&vet[i], &vet[i+1]);
		}
	}
}

int main () {
	int qtd;

	// recebe a quantidade de datas e cria um vetor
	printf("Digite o numero de datas: ");
	scanf("%d", &qtd);
	struct Data *d = malloc(qtd*sizeof(struct Data));
	
	// recebe as datas para o vetor de struct
	for (int i=0; i<qtd; i++) {
		printf("%d. Digite dia, mes e ano: ", i+1);
		scanf(" %d %d %d", &d[i].dia, &d[i].mes, &d[i].ano);
	}
	
	// chama a funcao de ordenacao
	ordena(d, qtd);
	
	// imprime as datas ordenadas
	printf("\n");
	for (int i=0; i<qtd; i++)
		printf("%d/%d/%d\n", d[i].dia, d[i].mes, d[i].ano);

	return 0;
}
