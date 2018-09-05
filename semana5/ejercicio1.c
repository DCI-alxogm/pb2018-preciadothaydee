/*Ejercicio numero 1 creado por Haydee Preciado*/

#include<stdio.h>
#include<math.h>
#include<complex.h>

int main ()
{
int start, loop;
int A,C,K,F,G,X,Y,R,O;

start=0;
printf("Ingresa el num de cosas que quieres convertir \n");
scanf("%i", &loop);
for(start=0; start<loop; start++){
printf("Inserta una opcion \n");
printf("Teclear 1 para convertir temperatura o 2 para convertir coordenada");
scanf("%i", &A);

switch (A)
{
case 1:
printf("Escriba la opcion 1 \n");
printf("Introduce la temperatura en C\n");
scanf("%f",&C);
K=C+273;
F=(C*9/5)+32;
G=(F-32)*5/9;
printf("\n Latemperatura en K es%f\n", K);
printf("\n La temperatura en F es %f \n",F);
printf("\n La temperatura en C es %f \n", G);
break;

case 2:
printf("Escriba la opcion 2 \n");
printf("Escribe la coordenada X,Y \n");
scanf("%f",&X);
scanf("%f", &Y);
R=sqrt(X*(X+Y)*Y);
O=atan(Y/X);
if (X>0)
{
O=O+0;
}
else if (X<0)
{
O=O+90;
};
printf("R= %f \n",R);
printf("O= %f \n", O);
break;
defautl:
printf("Opcion invalida");
break;
}
}
return 0;
}
