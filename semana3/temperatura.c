/*Creado el 20 de agosto por Haydee Preciado, es el primer programa de la semana tres*/

#include<stdio.h>
int main()
{
float C,K,F;

printf ("Se realizaran algunas conversiones de temperaturas \n");
printf ("Introduce la temperatura en grados Celsius");
scanf ("%f", &C);
printf ("La conversion va a ser de celsius a farenheit \n");
F=(C*(9/5)+32);
printf ("\nLos grados en farenheit son: %f \n", F);
printf ("La conversion va a ser de celsius a kelvin \n");
K=(C+273.15);
printf ("\nLos grados en kelvin son: %f \n", K);
return 0;
}
