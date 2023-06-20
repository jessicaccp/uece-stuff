/* Lista 2 - Questao 2
Faça uma funcao que receba duas strings e substitua todas as ocorrencias da
segunda string na primeira string por “*”. Por exemplo, se a primeira string
for “abcdabcdbbacdbba” e a segunda string “cd” a primeira string deve ser
modificada para “ab*ab*bba*bba”. */

#include<stdio.h>
#include<string.h>

// recebe os ponteiros para as strings, visto que sao vetores do tipo char
void subst (char *s1, char *s2) {
	int i, j, aux;
	
	// percorre a primeira string
	for (i=0; i<strlen(s1); i++) {
		aux = 1;
		// checa se o caractere coincide com o comeco da segunda string
		// e se a segunda cabe no espaco restante a ser percorrido da primeira
		if (s1[i] == s2[0] && (strlen(s1)-i) >= strlen(s2)) {
			// se sim, checa se o resto da segunda string se encontra na primeira
			for (j=0; j<strlen(s2); j++)
				if (s1[i+j] != s2[j])
					aux = 0;
			// se encontrar uma ocorrencia, substitui o primeiro caractere por um asterisco
			// e o restante eh apagado da string
			if (aux) {
				s1[i] = '*';
				for (j=i+1; j<strlen(s1); j++) {
					s1[j] = s1[j+strlen(s2)-1];
					// o processo eh feito ate o \0
					if (s1[j] == '\0')
						break;
				}
			}
		}
	}
}

int main () {
	char s1[102], s2[102];
	
	// recebe as strings
	printf("Digite a primeira string: ");
	fgets(s1, 101, stdin);
	printf("Digite a segunda string: ");
	fgets(s2, 101, stdin);
	
	// remove o \n
	s1[strlen(s1)-1] = '\0';
	s2[strlen(s2)-1] = '\0';
	
	// chama a funcao e imprime o resultado
	subst(s1, s2);
	printf("String modificada: %s\n", s1);
	
	return 0;
}
