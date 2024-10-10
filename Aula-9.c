#include <stdio.h>
#include <stdlib.h>
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
    char t[50], a[50], ibsn[50];
    int year;
    for(int i = 0; i < 5; i++){
        printf("Digite o nome do livro %d: ", i + 1);
        scanf("%s", t);

        printf("Digite o nome do autor do livro %d: ", i + 1);
        scanf("%s", a);

        printf("Digite o ano do livro %d : ", i + 1);
        scanf("%d", &year);
        getchar();

        printf("Digite o ISBN do livro %d: ", i + 1);
        scanf("%s", ibsn);

        strcpy(vetor[i].titulo, t);
        strcpy(vetor[i].autor, a);
        strcpy(vetor[i].isbn, ibsn);
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