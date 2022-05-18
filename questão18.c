#include <stdio.h>
#include <stdlib.h>

void imprimeMatrizes(int **mtzA, int **mtzB, int **mtzC, int la, int ca, int lb);
void multiplica(int **mtzA, int **mtzB, int **mtzC, int la, int ca, int lb);

int main(){
    int la, lb, ca, cb;
    printf("\n\t\t\t\tSOMA DE MATRIZES\t\t\t\t\n\n");
    printf("Digite a quantidade de linhas da matriz a: ");
    scanf("%d", &la);
    printf("digite a quantidade de colunas da matriz a: ");
    scanf("%d", &ca);
    printf("digite a quantidade de linhas da matriz b: ");
    scanf("%d", &lb);
    printf("digite a quantidade de colunas da matriz b: ");
    scanf("%d", &cb);

    int **mtzA = malloc(la*sizeof(*mtzA));
    for (int i = 0; i < la; i++) {
        mtzA[i] = malloc(ca*sizeof(*mtzA[i]));
        for (int j = 0; j < ca; j++){
            mtzA[i][j] = rand() % 100 + 1; 
        } 
    }
    int **mtzB = malloc(lb*sizeof(*mtzB));
    for (int i = 0; i < lb; i++) {
        mtzB[i] = malloc(cb*sizeof(*mtzB[i]));
        for (int j = 0; j < cb; j++){
            mtzB[i][j] = rand() % 100 + 1;
        } 
    }
    //alocar a matriz multiplicacao
    int **mtzMulti = malloc(la*sizeof(*mtzB));
    for (int i = 0; i < la; i++) {
        mtzMulti[i] = malloc(cb*sizeof(*mtzMulti[i]));
    }
    multiplica(mtzA, mtzB, mtzMulti, la, ca, lb);
    imprimeMatrizes(mtzA, mtzB, mtzMulti, la, lb, cb);
}
void imprimeMatrizes(int **mtzA, int **mtzB, int **mtzC, int la, int ca, int lb){
    printf("\n\t\t\t\tMatriz A\t\t\t\t\n");
    for(int i = 0; i<la; i++){
        for(int j = 0; j<ca; j++){
            printf("%d ", mtzA[i][j]);
        }
        printf("\n");
    }
    printf("\n\t\t\t\tMatriz B\t\t\t\t\n");
    for(int i = 0; i<lb; i++){
        for(int j = 0; j<ca; j++){
            printf("%d ", mtzB[i][j]);
        }
        printf("\n");
    }
    printf("\n\t\t\t\t(Matriz A)*(Matriz B)\t\t\t\t\n");
    for(int i = 0; i<la; i++){
        for(int j = 0; j<ca; j++){
            printf("%d ", mtzC[i][j]);
        }
        printf("\n");
    }
}
void multiplica(int **mtzA, int **mtzB, int **mtzC, int la, int ca, int lb){
    int soma = 0;
    for(int i = 0; i < la; i++){
        for(int j = 0; j < ca; j++){
            soma = 0;
            for(int k = 0; k < lb; k++){
                soma += mtzA[i][k]*mtzB[k][j]; 
            } 
            mtzC[i][j] = soma;
        }
    }
}
