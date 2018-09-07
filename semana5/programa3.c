/*Programa numerp tres de la semana 5*/

#include <stdio.h>
#include <math.h>
int main()
{
int c,d,a;
int x,y,z,w,b;
while(c==1||2)
{
if(c==2)
{
return 1;
}
printf("Presiona 1 para convertir a decimales y 2 para convertir a binarios\n");
scanf("%i",&d); 
b=1;
z=0;
w=0;
switch (d){
case 1:
printf("Escribe tu numero binario\n");
a=0;
while((a==0) || (a==1)){
scanf("%i",&a);
if((a==0)||(a==1)){ 				
b=1;
}
else{
b=0;
}
z=z+x*b*pow(2,w); 
w++;
}
printf("tu numero en decimal es: %i \n",z);
break;
case 2:
printf("Escribe tu numero en decimal\n");
scanf("%i",&x);
while(x!=0){
y=x%2;
x=x/2;
if(y==0){
printf("0");
}
else{
printf("1");
}
}
break;
}
printf("Si quieres salir pon 2, si quieres hacer algo mas pon 1\n");
scanf("%i",&c);
}
return 0;
}
