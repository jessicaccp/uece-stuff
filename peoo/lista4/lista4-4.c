/* Lista 4 - Questao 4
Escreva um programa em linguagem C que solicita ao usuário a quantidade de alunos de uma turma e aloca um vetor de notas (números reais). Depois de ler as notas, imprime a média aritmética. */

#include<stdio.h>
#include<stdlib.h>

int main () {
	int qtd;
	double soma=0.0, *v;

	// recebe a quantidade de alunos
	printf("Digite a quantidade de alunos da turma: ");
	scanf("%d", &qtd);
	
	// aloca um vetor de notas
	v = malloc(qtd*sizeof(double));
	
	// recebe as notas
	printf("Digite as notas dos %d alunos: ", qtd);
	for (int i=0; i<qtd; i++) {
		scanf("%lf", &v[i]);
		soma += v[i];
	}
	
	// imprime a media
	printf("Media aritmetica: %.2lf\n", soma/qtd);

	return 0;
}
