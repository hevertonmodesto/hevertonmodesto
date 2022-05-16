#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, i, j;
	float aux,*x;
	
	printf("Digite a quatidade de numeros (n): \n");
	scanf("%i", &n);
	x = malloc(n * sizeof(float));	
	for(i=0;i<n; i++){
		printf("Digite um numero: ");
		scanf("%f", &x[i]);		
	}	
	for(j=0;j<n; j++){
		for(i=0;i<n-1; i++){
      
			if(x[i+1]<x[i]){
				aux = x[i];
				x[i] = x[i+1];
				x[i+1] = aux;
			}	
		}
	}	
	for(j=0;j<n; j++){
		printf("%f \n", x[j]);
	}
	free(x);
}
