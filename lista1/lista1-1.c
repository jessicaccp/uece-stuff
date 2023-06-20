/* Lista 1 - Questao 1
Escreva um programa que leia 5 numeros inteiros e imprima a media aritmetica
destes 5 numeros, usando apenas duas variaveis. */

#include<stdio.h>
int main () {
	int v[5], i;
	
	// le os valores do vetor
	printf("Digite 5 numeros inteiros: ");
	for (i=0; i<5; i++) {
		scanf("%d", v+i);
		
		// a partir do segundo valor, soma-se o atual com o valor anterior
		// assim, o ultimo valor sera a soma de todos os anteriores
		if (i>0)
			v[i] += v[i-1];
	}
	
	// transforma o valor do vetor para double
	// para nao aparecer so a parte inteira da divisao
	printf("Media aritmetica: %.2lf\n", (double)(v[4])/5.0);
	
	return 0;
}
