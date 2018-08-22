/*Programa hecho por Haydee Preciado, segundo programa de la semana 2*/

#include<stdio.h>
#include<math.h>

int main()

{
float x,y2,y3,y,pi=3.1416;

printf("Se realizaran algunas funciones\n");
printf("Da un valor para x: \n");
scanf("%f",&x);
y=exp(-1*x);
printf("\n el resultado de esa operacion es:%f\n",y);
printf("De un valor para x\n");
scanf("%f",&x);
x=(x*(pi/180));
y2=(cos(x)+2*tan(x/2));
printf("\nel resultado de esa operacion es:%f\n",y2);
printf("De un valor para x\n");
scanf("%f",&x);
y3=(log(x)+3*(pow(x,2)));
printf("\nel valor de y3 despues de hacer la operacion es: %f\n",y3);
return 0;
}
