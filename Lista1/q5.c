#include <stdio.h>

int calc(int *a, int *b){ 
	int soma;

	soma = *a + *b;
	*a = soma;

	return 0; 
} 

int main(){
	int a, b; 
	calc(soma);
	
	printf("valor: %d %d", a, b);
	 	
	return 0;
}

