//Sin entrada ni salida

#include<stdio.h>
void cuadrado();
int main (){
cuadrado();
return 0;
}
void cuadrado(){
float x, x2;
printf("Que numero quieres elevar al cuadrado\n");
scanf("%f", &x);
x2=x*x;
printf("El cuadrado de %f es %f\n",x,x2);
}

