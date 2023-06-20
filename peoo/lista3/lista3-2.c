/* Lista 3 - Questao 2
O que será impresso pelo programa abaixo? */

#include <stdio.h>

struct T{
	int x;
	int y;
};

typedef struct T T;

void f1(T *a);
void f2(int *b);

int main () {
	T a, b, *c, *d;
	
	c = &a;		// c aponta para a
	a.x = 2;
	a.y = 4;	// a = (2,4)
				// c = (2,4)
	b.x = 2;
	b.y = 2;	// b = (2,2)
	d = c;		// d aponta para c
				// d = (2,4)
	f1(d);		// d = a = c (4,8)
	b = *d;		// b recebe o conteudo de d
				// b = (4,8)
	
	printf("x: %d --- y: %d\n",b.x,b.y);	// imprime x: 4 --- y: 8
}

void f1 (T *a){
	f2(&(a->x));	// (*a).x dobra de valor
	f2(&(a->y));	// (*a).y dobra de valor
}

void f2 (int *b){
	*b = 2*(*b);	// conteudo de b dobra de valor
}
