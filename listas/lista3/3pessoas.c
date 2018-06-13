/* Universidade Estadual do Ceara
Ciencia da Computacao
Introducao a Ciencia da Computacao 2016.2
Prof. Leonardo
Lista de exercicios 3 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main () {
    int i, idade, cont = 0, conth = 0, contp = 0;
    float altura, peso, somah = 0.0;

    for (i=1; i<=15; i++) {
        printf("\n- Pessoa %d:\n", i);
        printf("Idade: ");
        scanf(" %d", &idade);
        printf("Altura (em metros): ");
        scanf(" %f", &altura);
        printf("Peso: ");
        scanf(" %f", &peso);

        if (idade>50)
            cont++;
        if (idade>=10 && idade<=20) {
            somah += altura;
            conth++;
        }
        if (peso<40)
            contp++;
    }

    printf("\nPessoas acima de 50 anos: %d.\n"
           "Media de altura das pessoas com 10 a 20 anos: %.2f.\n"
           "Percentagem de pessoas com peso abaixo de 40kg: %d%%.\n", cont, somah/conth, 100*contp/15);
}
