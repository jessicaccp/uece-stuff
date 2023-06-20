/* Lista 1 - Questao 3
Escreva um programa que le uma string de ate 50 caracteres, e imprime “Palindromo”
(uma palavra ou frase, que e igual quando lida da esquerda para a direita ou da
direita para a esquerda) caso a string seja um palindromo e “Nao Palindromo” caso
contrerio. Exemplo de palindromo: saudavel leva duas. */

#include<stdio.h>
#include<string.h>
int main () {
	char s[52];
	int i, j, pali=1;
	
	// recebe a string e remove o \n do final
	printf("Digite uma string de ate 50 caracteres: ");
	fgets(s, 51, stdin);
	s[strlen(s)-1] = '\0';
	
	// remove os espacos da string
	// se o caractere checado for um espaco, todo o resto da string a partir dele
	// passa para um espaco a frente no vetor, apagando-o
	for (i=0; i<strlen(s); i++)
		if (s[i] == ' ') {
			for (j=i; j<strlen(s); j++)
				s[j] = s[j+1];
			i--; // necessario para o caso de terem 2 espacos seguidos
		}
	
	// checa se o caractere do comeco e do final sao iguais, ate o meio da string
	j = strlen(s)-1;
	for (i=0; i<strlen(s)/2; i++) {
		if (s[i] != s[j]) {
			pali = 0;
			break;
		}
		j--;
	}	

	// imprime os resultados
	if (pali)
		printf("Palindromo\n");
	else
		printf("Nao Palindromo\n");

	return 0;
}
