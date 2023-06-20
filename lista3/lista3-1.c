/* Lista 3 - Questao 1
Determine o valor especificado em cada item abaixo considerando que foi executado as seguintes
instruções (assuma que o endereço de x é 1000 e de y é 1004). */

#include<stdio.h>
#include<stdlib.h>

int main () {
	int x = 10, y=20, *p1, *p2;
	
	p1 = &x; // p1 aponta para x
	p2 = &y; // p2 aponta para y
	(*p1)++; // conteudo de p1 recebe +1, logo, conteudo de x recebe +1
	
	// x = 11 (conteudo de x)
	printf("(a) x = %d\n", x);
	
	// y = 20 (conteudo de y)
	printf("(b) y = %d\n", y);
	
	// &x = 1000 (endereco de x)
	printf("(c) &x = %d\n", 1000);
	
	// &y = 1004 (endereco de y)
	printf("(d) &y = %d\n", 1004);
	
	// p1 = 1000 (endereco para onde p1 aponta)
	printf("(e) p1 = %d\n", 1000);
	
	// p2 = 1004 (endereco para onde p2 aponta)
	printf("(f) p2 = %d\n", 1004);
	
	// *p1 + *p2 = x + y = 31 (soma dos conteudos de p1 e p2)
	printf("(g) *p1 + *p2 = %d\n", *p1+*p2);
	
	// *(&x) = x = 11 (conteudo do endereco de x)
	printf("(h) *(&x) = %d\n", *(&x));
	
	// &(*p2) = &y = 1004 (endereco do conteudo de p2)
	printf("(i) &(*p2) = %d\n", 1004);
	
	return 0;
}
