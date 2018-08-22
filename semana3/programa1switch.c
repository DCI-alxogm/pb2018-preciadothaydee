/*Este es el primer programa de switch*/

#include <stdio.h>

int main()
{
int opcion;

printf("Hay que teclear una opcion \n");
printf("(1) para convertir las temperaturas");
printf("(2) para convertir las coordenadas");

scanf("%i",&opcion);

switch(opcion)
{
case 1:
	printf("Diga la opcion 1");
	break;
case 2:
	printf("Inserte la opcion 2");
	break;
default: 
	printf("opcion invalida");
	break;
}
