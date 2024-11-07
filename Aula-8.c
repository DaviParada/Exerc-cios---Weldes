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
/*
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
*/


/* --- Nível 2 --- */

/* Exercício 1 */
/*
int main (){
int matriz[3][4], Soma[3] = {0, 0, 0};
for (int i = 0; i < 3; i++){
    for (int j = 0; j < 4; j++){
        printf("Digite um numero:\n");
        scanf("%d", &matriz[i][j]);
        Soma[i] += matriz[i][j];
    }
}

printf("\n-- MATRIZ RESULTANTE --\n");

for (int i = 0; i < 3; i++){
    for (int j = 0; j < 4; j++){
        matriz[i][j] *= Soma[i];
        printf("%d ", matriz[i][j]);
    }
    printf("\n");
}

return 0;
}
*/


/* Exercício 2 */
/*
int main(){

int matriz[3][3]; 

int i;
int j;
int soma = 0;

for (i = 0; i < 3; i++){
    for (j = 0; j < 3; j++){
        scanf("%d", &matriz[i][j]);
    }
}

for (i = 0; i < 3; i++){
    for (j = 0; j < 3; j++){
        soma += matriz [i][j];
    }
}
    printf("%d", soma);

    return 0;
}
*/

/* Exercício 3 */
/*
int main(){

int matriz[3][3];

int i;
int j;
int soma;
int k;

scanf ("%d", &k);

for (i = 0; i < 3; i++){
    for (j = 0; j < 3; j++){
        scanf("%d", &matriz[i][j]);
    }
}

for (i = 0; i < 3; i++){
    for (j = 0; j < 3; j++){
        printf("%d ", matriz [i][j] * k);
    }
    
    printf("\n");
}
}
*/

/* Exercício 4 */
/*
int main(){

int matriz[3][3] = {
    {1, 2, 3},
    {2, 4, 5},
    {3, 5, 6}
};
int tmatriz [3][3];

int i;
int j;

for (i = 0; i < 3; i++){
    for (j = 0; j < 3; j++){
        tmatriz[i][j] = matriz [j][i];
    }
}

for (i = 0; i < 3; i++){
    for (j = 0; j < 3; j++){
        if (matriz[i][j] != tmatriz [i][j]){
            return printf("nao simetrica");
        }
    }
}
printf("simetrica");

return 0;
}
*/

/* Exercicio 5 */
int main(){

int matriz[3][3] = {
    {1, 2, 3},
    {2, 4, 5},
    {2, 5, 6}
};
int tmatriz [3][3];

int i;
int j;

for (i = 0; i < 3; i++){
    for (j = 0; j < 3; j++){
        printf("%d ", matriz[i][j]);
    }
    printf("\n");
}

for (i = 0; i < 3; i++){
    for (j = 0; j < 3; j++){
        tmatriz[i][j] = matriz [j][i];
    }
}

printf("\ntransposta\n");

for (i = 0; i < 3; i++){
    for (j = 0; j < 3; j++){
        printf("%d ", tmatriz[i][j]);
        }
        printf("\n");
    }

return 0;
}