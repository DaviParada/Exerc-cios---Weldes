#include <stdio.h>
#include <stdlib.h>

void incrementa(int *valor){
    printf("Antes de icrementar\n");
    printf("O contador vale %d\n", (*valor));
    printf("O endereço de memória eh %d\n", valor);

    printf("Depois de incrementar\n");
    printf("O contador vale %d\n", ++(*valor));
    printf("O endereço de memória eh %d\n", valor);
}

int main () {
    int cont = 10;

    printf("Antes de icrementar\n");
    printf("O Contador vale %d\n", cont);
    printf("O endereço de memória eh %d\n", &cont);

    incrementa(&cont);

    printf("Depois de icrementar\n");
    printf("O contador vale %d\n", cont);
    printf("O endereço de memória eh %d\n", &cont);

    return 0;
}