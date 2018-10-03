#include <stdio.h>
int main()
{
int var=20; /*Se declara la variable*/
int *ip; /*Se declara la variable del apuntador*/
ip = &var; /*Se asigna la direccion de la variable al apuntador declarado*/

printf("La direccion de la variable var es: %x\n", (int) &var);
printf ("Direccion guardada en el apuntador ip: %x\n", (int) ip);
printf("El valor de *ip: %d\n", *ip);
return 0;
}
