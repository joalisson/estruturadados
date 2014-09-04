#include <stdio.h>

float le_notas(float *n1, float *n2){ 
	
	scanf("%f %f", n1, n2);
	return 0;
} 

//-------------------------------------------
float calc_media(float *n1, float *n2){ 
	float media, pond;
	
	
	media = *n1 + *n2;
	pond = (*n1 + *n2)*3/2;
	scanf("%f %f",&media, &pond);

	return 0;
	
} 
//-------------------------------------------

int main(){ 
	float n1, n2, media, pond;
	
	le_notas(&n1, &n2);
	printf("As notas sao %f %f", n1, n2);
	calc_media(&media, &pond);
	printf("As notas sao %f %f", media, pond);
	
	return 0;
}
