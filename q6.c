#include <stdio.h>
#include <math.h> 

void raizes(float a, float b, float c, float *x1, float *x2){
	
	float d = sqrt(b*b - 4*a*c);
	*x1 = (-b - d)/2*a; 
	*x2 = (-b + d)/2*a; 
}

int main(){ 
		
	float a, b, c, x1, x2; 
	printf("Coeficientes de a, b, c:"); 
	scanf("%f %f %f", a, b, c); 
	return 0; 
} 
