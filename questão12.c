/* Um ponteiro de função, também chamado ponteiro de sub-rotina ou ponteiro de procedimento, é um ponteiro que aponta para uma função.
Ao contrário de referenciar um valor de dados, um ponteiro de função aponta para o código executável na memória.*/

#include <stdio.h>

int soma (int x, int y){
	return x + y;
}
int main(){
	
	int x, y;
	int (*px)(int, int); //ponteiro para função
	printf("\t\t\t\t\tSOMA\t\t\t\t\t\n");
	printf("Digite um número: ");
	scanf("%d", &x);
	printf("Digite outro número: ");
	scanf("%d", &y);
	
	px = soma;
	
	printf("\nA soma é : %d", px(x, y));	
}
