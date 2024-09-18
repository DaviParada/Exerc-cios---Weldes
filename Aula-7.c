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

















