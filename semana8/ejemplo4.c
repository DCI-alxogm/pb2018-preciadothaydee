#include <stdio.h>
#include <stdlib.h>

int main ()
{
int num, i, *ptr, sum=0;
ptr=(int*) malloc(num*sizeof(int)); /*Se reserva la memoria sando malloc*/
printf("Introduce el numero de elementos: ");
scanf("%d", &num);
if(ptr==NULL)
{
printf("Error, memoria no reservada");
exit (0);
}
printf("Introduce los elementos del arreglo:");
for (i=0; i<num;++i);
{
