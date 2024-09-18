/* --- Nível 1 --- */

/* Exercício 1*/
/*int main (){
    int numeros[5], soma = 0, i;

    for (i = 0; i < 5; i++){
        printf("Insira um numero:\n");
        scanf("%d",&numeros[i]);
        soma += numeros[i];
    }
    
    printf("%d",soma);

    return 0;
}
*/


/* Exercício 2*/
/*int main (){
    int numeros[5], soma = 0, i;

    for (i = 0; i < 5; i++){
        printf("Insira um numero:\n");
        scanf("%d",&numeros[i]);
        soma += numeros[i];
    }
    
    printf("A media eh: %d", soma / 5);

    return 0;
}
*/


/* Exercício 3 */
/*int main (){
    int numeros[10], soma = 0, i, maiorValor = 0;

    for (i = 0; i < 10; i++){
        printf("Insira um numero:\n");
        scanf("%d",&numeros[i]);
        if (numeros[i] > maiorValor ){
            maiorValor = numeros[i];
        } 
    }
    
    printf("O maior valor eh: %d", maiorValor);

    return 0;
}
*/


/* Exercício 4 */
/*
int main (){
    int vetor[10], i, qtdPares = 0, qtdImpar = 0, qtdNulo = 0;
    for (i = 0; i < 10; i++){
        printf("Digite um numero para o vetor:\n");
        scanf("%d",&vetor[i]);
        }
    for (i = 0; i < 10; i++){
        if (vetor[i] % 2 == 0){
            qtdPares++;
        }  else {
            qtdImpar++;
        }
        }

    printf("A quantidade de numeros pares eh: %d\n", qtdPares);
    printf("A quantidade de numeros impares eh: %d\n", qtdImpar);

    return 0;
}
*/


/* Exercício 5 */
/*
int main (){
    int vetor [5], i;
    for (i = 0; i <= 4; i++){
        printf("Digite um numero:");
        scanf("%d",&vetor[i]);
    }

    for (i = 0; i <= 4; i++){
        printf("%d\n", vetor[i]);
    }
       
    printf("----- Invertendo a ordem do vetor -----\n");

    for (i = 4; i >= 0; i--){   
        printf("%d\n", vetor[i]);
    }

    return 0;
}
*/



/* --- Nível 2 --- */

/* Exercicio - 1 */
/*
void bubbleSort(int vetor[], int tamanho){
    int i, j, aux;
    for (i = 0; i < tamanho - 1; i++){
        for (j = 0; j < tamanho - i - 1; j++){
            if (vetor[j] > vetor[j + 1]){
                // Troca os elementos do posição
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
    printf("Array ordenado:\n");
    for (i = 0; i < tamanho; i++){
        printf("%d\n", vetor[i]);
    }
}

int main (){
    int vetor[10], tamanho = 10, i;
    for(i = 0; i < tamanho; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    bubbleSort(vetor, tamanho);

    return 0;
}
*/


/* Exercicio - 2 */
/*
void somaVetores (int v1[], int v2[],int vResultante[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        vResultante[i] = v1[i] + v2[i];
    }
}

int main (){
    int v1[9], v2[9], vResultante[9], tamanho = 9;
    for(int i = 0; i < tamanho; i++){
        printf("Digite os valores para o primeiro vetor: ");
        scanf("%d", &v1[i]);
    }
    printf("\n");
    for(int i = 0; i < tamanho; i++){
        printf("Digite os valores para o segundo vetor: ");
        scanf("%d", &v2[i]);
    }

    somaVetores(v1, v2, vResultante, tamanho);
    
    printf("\nVetor Resultante da soma: ");
    for(int i = 0; i < tamanho; i++){
        printf("%d; ", vResultante[i]);
    }

    return 0;
}
*/


/* Exercicio - 3 */
/*
int busca_sequencial(int vetor[], int tamanho, int valor){
    for(int i = 0; i < tamanho; i++){
        if (vetor[i] == valor){
            printf("Numero Encontrado!");
            return 1;
        }
    }
    printf("Numero nao encontrado!");
    return 0;
}

int main (){
    int vetor[10], num, tamanho = 10;
    for(int i = 0; i < tamanho; i++){
        printf("Digite um numero para o vetor: ");
        scanf("%d", &vetor[i]);
    }

    printf("Digite um numero para saber se esta presente no vetor:\n");
    scanf("%d", &num);

    busca_sequencial(vetor, tamanho, num);

    return 0;
}
*/


/* Exercicio - 4 */
/*
int notaMat(float aluno1[3], float aluno2[3], float aluno3[3], float aluno4[3], float aluno5[3], int tamanho){
    printf("Digite a nota de matematica do aluno 1: \n");
    scanf("%f", &aluno1[0]);
    printf("Digite a nota de matematica do aluno 2: \n");
    scanf("%f", &aluno2[0]);
    printf("Digite a nota de matematica do aluno 3: \n");
    scanf("%f", &aluno3[0]);
    printf("Digite a nota de matematica do aluno 4: \n");
    scanf("%f", &aluno4[0]);
    printf("Digite a nota de matematica do aluno 5: \n");
    scanf("%f", &aluno5[0]);
    }

int notaPort(float aluno1[3], float aluno2[3], float aluno3[3], float aluno4[3], float aluno5[3], int tamanho){
    printf("Digite a nota de portugues do aluno 1: \n");
    scanf("%f", &aluno1[1]);
    printf("Digite a nota de portugues do aluno 2: \n");
    scanf("%f", &aluno2[1]);
    printf("Digite a nota de portugues do aluno 3: \n");
    scanf("%f", &aluno3[1]);
    printf("Digite a nota de portugues do aluno 4: \n");
    scanf("%f", &aluno4[1]);
    printf("Digite a nota de portugues do aluno 5: \n");
    scanf("%f", &aluno5[1]);
    }

int notaFis(float aluno1[3], float aluno2[3], float aluno3[3], float aluno4[3], float aluno5[3], int tamanho){
    printf("Digite a nota de fisica do aluno 1: \n");
    scanf("%f", &aluno1[2]);
    printf("Digite a nota de fisica do aluno 2: \n");
    scanf("%f", &aluno2[2]);
    printf("Digite a nota de fisica do aluno 3: \n");
    scanf("%f", &aluno3[2]);
    printf("Digite a nota de fisica do aluno 4: \n");
    scanf("%f", &aluno4[2]);
    printf("Digite a nota de fisica do aluno 5: \n");
    scanf("%f", &aluno5[2]);
    }

int main(){
    float media1, media2, media3, media4, media5;
    float aluno1[3], aluno2[3], aluno3[3], aluno4[3], aluno5[3];
    int tamanho = 3;
    float pesoMat, pesoPort, pesoFis, soma;

    printf("Digite o peso da nota de matematica: ");
    scanf("%f", &pesoMat);
    printf("Digite o peso da nota de portugues: ");
    scanf("%f", &pesoPort);
    printf("Digite o peso da nota de fisica: ");
    scanf("%f", &pesoFis);

    notaMat(aluno1, aluno2, aluno3, aluno4, aluno5, tamanho);
    notaPort(aluno1, aluno2, aluno3, aluno4, aluno5, tamanho);
    notaFis(aluno1, aluno2, aluno3, aluno4, aluno5, tamanho);

    soma = (pesoMat + pesoPort + pesoFis);
    media1 = ((aluno1[0] * pesoMat) + (aluno1[1] * pesoPort) + (aluno1[2] * pesoFis)) / soma;
    media2 = ((aluno2[0] * pesoMat) + (aluno2[1] * pesoPort) + (aluno2[2] * pesoFis)) / soma;
    media3 = ((aluno3[0] * pesoMat) + (aluno3[1] * pesoPort) + (aluno3[2] * pesoFis)) / soma;
    media4 = ((aluno4[0] * pesoMat) + (aluno4[1] * pesoPort) + (aluno4[2] * pesoFis)) / soma;
    media5 = ((aluno5[0] * pesoMat) + (aluno5[1] * pesoPort) + (aluno5[2] * pesoFis)) / soma;
    
    printf("Media do aluno 1: %.2f\n", media1);
    printf("Media do aluno 2: %.2f\n", media2);
    printf("Media do aluno 3: %.2f\n", media3);
    printf("Media do aluno 4: %.2f\n", media4);
    printf("Media do aluno 5: %.2f\n", media5);

    return 0;
}
*/


/* Exercicio - 5 */
int main (){
    int vetor[10], numeroParaExcluir, tamanho = 10;
    for(int i = 0; i < 10; i++){
        printf("Digite um numero para o vetor: ");
        scanf("%d", &vetor[i]);
    }
    
    printf("Digite um numero para excluir a ocorrencia dele do vetor: ");
    scanf("%d", &numeroParaExcluir);

    for(int i = 0; i < tamanho; i++){
        if(vetor[i] == numeroParaExcluir){
            for(int j = i; j < tamanho - 1; j++){
                vetor[j] = vetor[j + 1];
            }
            tamanho--;
            i--;
        }
    }

    printf("Vetor atualizado\n");
    for(int i = 0; i < tamanho; i++){
        printf("%d; ", vetor[i]);
    }

    return 0;
}


















