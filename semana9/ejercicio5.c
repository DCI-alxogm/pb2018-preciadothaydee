//Argumentos de entrada sin argumentos de salida

#include<stdio.h>

void cuadrado (float x);

int main(){
return 0;
}
void cuadrado(float x){

	float  xx;
	printf("Que numero quieres que se eleve\n");
	scanf ("%f", &x);
	xx=x*x;
	printf("El cuadrado de %f es igual a %f", x,xx);

}



