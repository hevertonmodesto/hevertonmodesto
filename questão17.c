#include <stdio.h>   
#include <stdlib.h>     


void somarVetores (int a[], int b[], int c[], int n){
	
	int i;
	
	for(i=0; i<n; i++){
		  c[i] = a[i] + b[i];
	}
	for(i=0; i<n; i++){
		  printf("%i ", c[i]);
	} 
}
int main (){
	
	int n, i;
	float aux;
	
	printf("\n\t\tSOMA DE ELEMENTOS CORRESPONDENTES\t\t\t \n");
	scanf("%i", &n);
	int a[n], b[n], c[n];
	
	for(i=0;i<n; i++){ 
	
		printf("Digite a posicao %i do vetor a: \n", i);
		scanf("%i", &a[i]);
		printf("Digite a posicao %i do vetor b: \n", i);
		scanf("%i", &b[i]);
		
	}
	
	somarVetores(a,b,c,n);
	
	
}
