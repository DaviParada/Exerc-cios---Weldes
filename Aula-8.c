/* --- Nível 1 --- */

/* Exercício 1*/
/*
int main(){
int matriz[3][3];
for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
        printf("Digite um numero:\n");
        scanf("%d", &matriz[i][j]);
    }
}

for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
        printf("%d ",matriz[i][j]);
    }
    printf("\n");
}
return 0;
}
*/


/* Exercício 2 */
/*
int main (){
int matriz[3][3], soma = 0;
for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
        printf("Digite um numero:\n");
        scanf("%d", &matriz[i][j]);
    }
}

for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
        soma += matriz[i][j];
    }
}
printf("A soma dos elementos da matriz eh: %d", soma);

return 0;
}
*/


/* Exercício 3 */
/*
int main (){
int matriz[3][3], num;

for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
        printf("Digite um numero:\n");
        scanf("%d", &matriz[i][j]);
    }
}

printf("Digite um numero para multiplicar os elementos da matriz: ");
scanf("%d", &num);

for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
        matriz[i][j] *= num;
        printf("%d ", matriz[i][j]);
    }
    printf("\n");
}

return 0;
}
*/


/* Exercício 4 */
/*
int main (){
int matriz[3][3];

for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
        printf("Digite um numero:\n");
        scanf("%d", &matriz[i][j]);
    }
}

for (int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        if (matriz[i][j] != matriz [j][i]){
            printf("A matriz nao eh simetrica!");
            return 0;
        }
    }
}
printf("A matriz eh simetrica!");

return 0;
}
*/


/* Exercício 5 */
int main (){
int matriz[3][3], tmatriz[3][3];

for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
        printf("Digite um numero:\n");
        scanf("%d", &matriz[i][j]);
        tmatriz[i][j] = matriz[j][i];
    }
}

for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
        tmatriz[i][j] = matriz[j][i];
        printf("%d ", tmatriz[i][j]);   
    }
    printf("\n");
}

return 0; 
}