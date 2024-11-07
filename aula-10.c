#include <stdio.h>
#include <stdlib.h>

/*
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
*/

/* Exercício - 1 */
/*
int quadrado(int num){
    return num * num;
}
int main(){
    int num;
    printf("Insira um numero para saber o seu quadrado: \n");
    scanf("%d", &num);
    printf("%d", quadrado(num));
}
*/

/* Exercício - 2 */
/*
int ParouImpar(num){
    if (num % 2 == 0) return 1;
    return 0;
    }
int main (){
    int num;
    printf("Digite um numero: \n");
    scanf("%d", &num);
    if(ParouImpar(num)){
        printf("Esse numero eh par!");
    } else if(num == 0){
        printf("Esse numero eh neutro!");
    } else {
        printf("Esse numero eh impar!");
    }

}
*/

/* Exercício - 3 */
/*
float media(float num1, float num2, float num3){
    return printf("A media eh: %f", ((num1 + num2 + num3) / 3));
}
int main(){
    float num1, num2, num3;
    printf("Digite o primeiro numero: \n");
    scanf("%f", &num1);
    printf("Digite o segundo numero: \n");
    scanf("%f", &num2);
    printf("Digite o terceiro numero: \n");
    scanf("%f", &num3);
    media(num1, num2, num3);

    return 0;
}
*/

/* Exercício - 4 */
/*
int Maior(int num1, int num2){
    if (num1 > num2){
        printf("%d eh o maior numero", num1);
    } else {
        printf("%d eh o maior numero", num2);
    }
    return 0;
}
int main(){
    int num1, num2;
    printf("Digite o primeiro numero: \n");
    scanf("%d", &num1);
    printf("Digite o segundo numero: \n");
    scanf("%d", &num2);
    Maior(num1, num2);

}
*/

/* Exercício - 5 */
/*
float CtoF(float cel){
    return ((1.8 * cel) + 32);
}
float FtoC(float fah){
    return ((fah - 32) / 1.8);
}
int main(){
    float cel, fah;
    int menu;
    do {
        printf("Escolha uma opcao:\n");
        printf("1 - Celsius para Fahrenheit\n");
        printf("2 - Fahrenheit para Celsius\n");
        printf("3 - Sair\n");
        scanf("%d", &menu);

        switch(menu){
            case 1:
             printf("Insira o valor em graus celsius:\n");
             scanf("%f", &cel);
             printf("Esse valor equivale a %.2f graus Fahrenheit\n", CtoF(cel));
            break;
            case 2:
             printf("Insira o valor em graus Fahrenheit:\n");
             scanf("%f", &fah);
             printf("Esse valor equivale a %.2f graus Celsius\n", FtoC(fah));
            break;
            case 3:
             printf("Saindo...\n");
            break;
            default:
             printf("Opcao invalida!");
            break;
        }

    } while(menu != 3);
    return 0;
}
*/

/* Exercício - 6 */
/*
int soma(int vet[], int tam){
    int soma = 0;
    for(int i = 0; i < tam; i++){
        soma += vet[i];
    }
    return soma;
}

int main (){
    int tam;
  
    scanf("%d", &tam);

    int vet[tam];
  
    for (int i = 0; i < tam; i++){
        scanf("%d", &vet[i]);
    }
  
    printf("%d", soma(vet,tam));

    return 0;
}
*/

/* Exercício - 7 */
/*
int dig (int num){
    int aux = 0;
    do {
        ++aux;
        num /= 10;
    } while (num != 0);
    return aux;
}
int main (){

    int num;
    
    scanf("%d", &num);

    printf("%d", dig(num));

    return 0;
}
*/



