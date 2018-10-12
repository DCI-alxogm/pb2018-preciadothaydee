//Argumentos de salida sin argumentos de entada

#include<stdio.h> 
float cuadrado();

int main(){ 
	float x2; 
	x2=cuadrado(); 
	printf("%f \n", x2); 
	return 0; 
}

float cuadrado(){ 
	float x, xx; 
	printf("Introduce un número \n"); 
	scanf("%f", &x);
	xx= x*x; 
	
	return xx; 
}
