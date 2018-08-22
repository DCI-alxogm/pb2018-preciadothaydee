/*Programa hecho por Haydee Preciado. edades, segunda semana de clases*/

#include<stdio.h>
int main ()
{

int edad,edad2;
char nombre [20];

printf("hola, dime tu nombre\n");
scanf("%s" ,&nombre);
printf("Cual es tu edad\n");
scanf("%i" ,&edad);
edad2=edad+10;
printf("tu edad en 2018 será : %i", edad2);


}
