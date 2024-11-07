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


/* Exercício 2 */
/*
struct Ponto {
    float x;
    float y;
};

int main () {

    struct Ponto ponto1;
    struct Ponto ponto2;
    
        printf("Digite o X1: ");
        scanf ("%f", &ponto1.x);
        printf("Digite o X2: ");
        scanf ("%f", &ponto2.x);
    
        
        printf("Digite o Y1: ");
        scanf ("%f", &ponto1.y);
        printf("Digite o Y2: ");
        scanf ("%f", &ponto2.y);

    printf("%f", sqrt((ponto2.x - ponto1.x)*(ponto2.x - ponto1.x) + (ponto2.y - ponto1.y)*(ponto2.y - ponto1.y)));

    return 0;
}
*/

/* Exercício 3 */
/*
struct Funcionario {
    char nome [50];
    int idade;
    float salario;
    char cargo [50];
};

int main (){

    

    struct Funcionario funcionario[3];
    int maior = 0;

    for(int i = 0; i < 3; i++){
        
        printf("\nInformacoes funcionario %d\n", i + 1);
    
        printf("Nome: ");
        scanf("%s", funcionario[i].nome);
    
        printf("Idade: ");
        scanf("%d", &funcionario[i].idade);

        printf("Salario: ");
        scanf("%f", &funcionario[i].salario);

        printf("Cargo: ");
        scanf("%s", funcionario[i].cargo);

        if(funcionario[i].salario > funcionario[maior].salario){
            maior = i;
        }
    }

    printf("\nFuncionario de maior salario\n");

    printf("Nome: %s\n", funcionario[maior].nome);
    printf("Idade: %d\n", funcionario[maior].idade);
    printf("Salario: %.2f\n", funcionario[maior].salario);
    printf("Cargo: %s\n", funcionario[maior].cargo);

    return 0;
}
*/

/* Exercício 4 */
/*
struct Retangulo {
    float altura;
    float largura;
}; 

int main (){

struct Retangulo retangulo;

    printf("Altura: ");
    scanf("%f", &retangulo.altura);

    printf("Largura: ");
    scanf("%f", &retangulo.largura);

    printf("Perimetro: %.2f", ((retangulo.altura*2) + (retangulo.largura*2)));

    return 0;
}
*/

/* Exercício 5 */
struct Data {
    int dia;
    int mes;
    int ano;
};

int main (){

    struct Data data;
    int final[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    printf("Dia: ");
    scanf("%d", &data.dia);
    printf("Mes: ");
    scanf("%d", &data.mes);
    printf("Ano: "); 
    scanf("%d", &data.ano);

    if(data.ano % 4 == 0){
        final[2] = 29;
    }

    if(data.mes > 12){
          return printf("Data invalida");
    }

     if (data.dia < 1 || data.dia > final[data.mes]) {
        return printf("Data invalida");
    }

    printf("%d/%d/%d", data.dia, data.mes, data.ano);

    return 0;
}