#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// struct Aluno {     
//     char nome[50];
//     int idade;
//     float nota1, nota2;
// };
//strcpy(aluno1.nome, "Maria")  Tenho que usar "strcpy" para jogar uma string na
//variável nome



/* --- Nível 1 --- */

/* Exercício 1*/
typedef struct{     
    char titulo[50];    
    char autor[50];
    int ano;
    char isbn[50];
} Livros;

int main (){
    Livros vetor[5];
    char titulo[50], autor[50], isbn[50];
    int year;
    for(int i = 0; i < 5; i++){
        printf("Digite o nome do livro %d: ", i + 1);
        scanf("%s", titulo);

        printf("Digite o nome do autor do livro %d: ", i + 1);
        scanf("%s", autor);

        printf("Digite o ano do livro %d : ", i + 1);
        scanf("%d", &year);
        getchar();

        printf("Digite o ISBN do livro %d: ", i + 1);
        scanf("%s", isbn);

        strcpy(vetor[i].titulo, titulo);
        strcpy(vetor[i].autor, autor);
        strcpy(vetor[i].isbn, isbn);
        vetor[i].ano = year;

    }

    for(int i = 0; i < 5; i++){
        printf("Nome do livro %d:\n%s", i + 1, vetor[i].titulo);
        printf("\nNome do autor do livro %d:\n%s", i + 1, vetor[i].autor);
        printf("\nAno do livro %d:\n%d", i + 1, vetor[i].ano);
        printf("\nISBN do livro %d:\n%s", i + 1, vetor[i].isbn);
    }

    return 0;
}


/* Exercício 2*/
typedef struct{
    float x;
    float y;
} ponto;

int main (){
    ponto ponto;
    float varX, varY;
    printf("Digite o valor de X do ponto");
    scanf("%f", &varX);
    printf("Digite o valor de Y do ponto");
    scanf("%f", &varY);

    ponto.x = varX;
    ponto.y = varY;
    
    

    
}


