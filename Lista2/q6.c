#include <stdio.h> 

void troca(float *a, float *b){ 
	int aux; 
	aux = *a; 
	*a = *b; 
	*b= aux; 
} 
int main(){ 
	printf("O resultado da troca %x", troca, &troca);
	return 0;
} 
