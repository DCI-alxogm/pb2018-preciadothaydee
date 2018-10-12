#include<stdio.h>

void cubo1();
float cubo2(float h);
void cubo3(float x);
float cubo4();

int main()
{
	int e;
	float x,x3;
	float a;
	float xxx;
	
	printf("Elige como quieres que se calcule el programa: \t (1) sin argumentos de entrada ni salida \t (2) con argumentos de entrada y salida\t (3) con argumentos de entrada unicamente\t (4) con argumentos de salida unicamente\n");
	scanf("%i",&e);

	if(e==1)
	cubo1();
	return 1;


	if(e==2)
	
	
	printf("Introduce un numero elevarlo al cubo: \n");
	scanf("%f",&x);
	x3=x*x*x;
	printf("El cubo de %f es %f\n",x,x3);
	return 2;

	if(e==3)
	
	
	printf("Introduce un numero elevarlo al cubo: \n");
	scanf("%f",&a);
	cubo3(a);
	return 3;


	if(e==4)

	xxx=cubo4();
	
	printf("El cubo de %f es %f\n",xxx);
	return 4;

return 0;
}
void cubo1()
{
	float x,x3;
	printf("Introduce un numero elevarlo al cubo: \n");
	scanf("%f",&x);
	x3=x*x*x;
	printf("El cubo de %f es %f\n",x,x3);
}
float cubo2(float h)
{
	return cubo2(h);
}
void cubo3(float x)
{
	float x3;
	x3=x*x*x;
	printf("El cubo de %f es %f\n",x,x3);
	
}
float cubo4()
{
	float x,x3;
	printf("Introduce un numero elevarlo al cubo: \n");
	scanf("%f",&x);
	x3=x*x*x;
	return x3;

}
