#include <stdio.h> 
#include <stdlib.h>
int y[900];
int compare1(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}
int compare (const int a, const int b){
    if(a == b){  
        return 0;
    }
    else if(a > b){ 
        return 1;
    }else{
        return -1;
    }
}
void meusort (int* base, int num, int (*comp)(const int, const int)){
    int aux;
    for(int j = 0; j<num; j++){
        for(int i = 0; i<num; i++){
            if(comp(base[i],base[j]) == 1){
                aux = base[i];
                base[i] = base[j];
                base[j] = aux;
            }
        }
    }
    for (int i = 0; i < num; i++)
    {
      y[i] = base[i];
    }    
}
int main(){
        int n;
        int *x, *y, z[n];
        printf("\t\t\tORDEM CRESCENTE\t\t\t\n\n");
	      printf("Digite a quatidade de numeros para ordenar de forma crescente : \n");
        scanf("%d", &n); //leitura da quantidade de elementos do array
        x = (int*) malloc (n*sizeof(int)); 
          for(int i = 0; i<n; i++){
              printf("Digite um numero: ");
              scanf("%d", &x[i]); 
              z[i] = x[i];
          }
        printf("\nCOM QSORT :\n\n");
        y = (int*) malloc (n*sizeof(int));
        qsort(z,n,sizeof(int), compare1);
        for(int i = 0; i<n; i++){
            printf("%d\n", z[i]);
        }
        free(y);
        printf("\nCOM MEU ORDENADOR :\n\n");
        meusort(x, n, compare);
        for(int i = 0; i<n; i++){
            printf("%d\n", x[i]);
        }
        free(x);
}
