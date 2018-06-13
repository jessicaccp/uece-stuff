/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 810 */

#include<stdio.h>
#include<stdlib.h>
#include<strings.h>

int main () {
    printf("Este programa foi escrito por Jessica Cristina Cacau Patricio.\n\n");

    /* Declaracao das variaveis */
    int i, j, primo, primeiro;
    FILE *fp;
    fp = fopen("PRIMOS.txt", "wt"); /* wt para 'escrever' num .txt */

    /* Se fp for NULL, mostra uma mensagem de erro e encerra o programa */
    if (!fp) {
        printf("Erro ao abrir o arquivo, tente novamente.\n\n");
        return 0;
    }

    printf("Imprimindo os numeros primos entre 2 e 5000 no arquivo .txt.\n\n");
    primeiro = 1; /* Auxiliar para a hora da impressao do primeiro numero no arquivo */
    for (i=2; i<=5000; i++) {
        primo = 1; /* Auxiliar para saber se o numero eh primo ou nao */
        for (j=2; j<=i; j++) {
            if (i%j==0 && i!=j) /* Se i tiver um divisor alem dele mesmo, nao eh primo */
                primo = 0;
        }

        /* Impressao dos numeros primos no arquivo */
        if (primo==1) {
            if (primeiro==1) {
                fprintf(fp, "%d", i);
                primeiro = 0;
            }
            else /* Quando o numero nao eh o primeiro a ser impresso, ele pula uma linha antes */
                fprintf(fp, "\n%d", i);
        }
    }

    fclose(fp);
    printf("Impressao finalizada, cheque o arquivo .txt.\n\n");

    return 0;
}
