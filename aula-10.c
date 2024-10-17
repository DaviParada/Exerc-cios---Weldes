#include <stdio.h>
#include <stdlib.h>

int soma(int m, int n){
    return m + n;
}
int subtracao(int m, int n){
    return m - n;
}
int multiplicacao(int m, int n){
    return m * n;
}
int divisao(int m, int n){
    return m / n;
}

int main(){
    int m, n;
    printf("Digite o valor de m\n");
    scanf("%d", &m);
    printf("Digite o valor de n\n");
    scanf("%d", &n);
    
    printf("m + n = %d\n", soma(m, n));
    printf("m - n = %d\n", subtracao(m, n));
    printf("m * n = %d\n", multiplicacao(m, n));
    printf("m / n = %d\n", divisao(m, n));
}