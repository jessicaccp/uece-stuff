/* Lista 1 - Questao 4
Escreva um programa que leia um tabuleiro de jogo da velha e verifique o status do
jogo. O tabuleiro é composto de nove números, onde o jogador ‘O’ é representado por um 0; o
jogador ‘X’ por um 2 e uma casa vazia por um 1. A saída do seu programa deve ser ‘X’, ‘O’, ‘Velha’
(empatado) ou ‘Indefinido’ (ainda não terminou). */

#include<stdio.h>
int main () {
	int v[3][3], i, j, venc=-1, um=0;
	
	// recebe os valores do tabuleiro, esperando que seja valido, ou seja, sem mais de um vencedor
	printf("Digite os 9 valores referentes ao tabuleiro:\n");
	for (i=0; i<3; i++)
		for (j=0; j<3; j++) {
			scanf("%d", &v[i][j]);
			// faz a contagem das casas vazias
			if (v[i][j] == 1)
				um++;
		}
	
	// checa se alguem venceu numa jogada por uma das diagonais
	// se sim, guarda o valor do vencedor
	if (v[0][0] == v[1][1] && v[0][0] == v[2][2] && v[0][0] != 1)
		venc = v[0][0];
	else if (v[0][2] == v[1][1] && v[1][1] == v[2][0] && v[1][1] != 1)
		venc = v[1][1];
	// se nao, checa se alguem venceu numa jogada em uma das linhas ou colunas
	// se sim, guarda o valor do vencedor. se nao, o valor da variavel continua -1
	else
		for (i=0; i<3; i++)
			if (v[i][0] == v[i][1] && v[i][1] == v[i][2] && v[i][0] != 1)
				venc = v[i][0];
			else if (v[0][i] == v[1][i] && v[1][i] == v[2][i] && v[0][i] != 1)
				venc = v[0][i];
	
	// se o valor continua -1, ninguem venceu
	// logo, se existir alguma casa vazia no tabuleiro, o jogo nao terminou
	// se nao existir casa vazia, o jogo deu velha
	if (venc == -1)
		if (um == 0)
			printf("Velha\n");
		else
			printf("Indefinido\n");
	// se ha vencedor, imprime o resultado de acordo com o enunciado
	else
		if (venc == 0)
			printf("O\n");
		else
			printf("X\n");
			
	return 0;
}
