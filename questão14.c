#include <stdio.h>   
#include <stdlib.h>     

int compare (const void * a, const void * b) // comparando os valores: a>b ou b>a
{
  return ( *(float*)a - *(float*)b ); // retornando as variaveis comparadas
}
int main (){	
	       int n, i, j;
	       float aux,*x;
	       printf("\t\t\tORDEM CRESCENTE\t\t\t\n\n");
	       printf("Digite a quatidade de numeros para ordenar de forma crescente : \n"); // Lendo a quantidade de numeros para ordenar
         scanf("%i", &n);
	       x = malloc(n * sizeof(float)); // alocaçao dinamica de memoria
	       for(i=0;i<n; i++){ // laço para ler os valores 
                 printf("Digite um numero: ");
		             scanf("%f", &x[i]);		
	       } 
	    qsort (x, n, sizeof(float), compare); // ordenação crescente
		  printf("\n\nCRESCENTE : \n");
	    for (i=0; i<n; i++){ // exibindo o novo vetor
		  printf ("%f\n",x[i]);
	 }
   free(x); // A função free libera o espaço de memória alocado.
	 return 0;
}
