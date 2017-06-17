/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 306 */

#include<stdlib.h>
#include<stdio.h>
#include<strings.h>

void main () {
    float adao, joao, pedro;

    printf("Digite as alturas de Adao, Joao e Pedro, respectivamente: ");
    scanf("%f %f %f", &adao, &joao, &pedro);

    if (adao>joao)
        if (adao>pedro)
            printf("Adao eh maior que Joao e Pedro\n");
        else
            if (adao<pedro)
                printf("Adao eh maior que Joao, mas menor que Pedro\n");
            else
                printf("Adao eh maior que Joao e mede o mesmo que Pedro\n");
    else
        if (adao<joao)
            if (adao>pedro)
                printf("Adao eh menor que Joao, mas maior que Pedro\n");
            else
                if (adao<pedro)
                    printf("Adao eh menor que Joao e Pedro\n");
                else
                    printf("Adao eh menor que Joao e mede o mesmo que Pedro\n");
        else
            if (adao>pedro)
                printf("Adao mede o mesmo que Joao e eh maior que Pedro\n");
            else
                if (adao<pedro)
                    printf("Adao mede o mesmo que Joao e eh menor que Pedro\n");
                else
                    printf("Adao mede o mesmo que Joao e Pedro\n");
}
