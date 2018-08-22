/*Este programa va a convertir las coordenadas cartesianas a esfericas*/

#include<stdio.h>
#include<math.h>

int  main()
{
float x,y,z,r,a,p,pi=3.1416;

printf("Se van a convertir las coordenadas cartesianas a coordenadas esfericas\n");
printf("Inroduce un valor para x\n");
scanf("%f",&x);
printf("Inroduce un valor para y\n");
scanf("%f",&y);
printf("Inroduce un valor para z\n");
scanf("%f",&z);
r=sqrt((pow(x,2))+(pow(y,2))+(pow(z,2)));
y=(108/pi)*y;
z=(108/pi)*z;
x=(108/pi)*x;
a=acos(z/r);
p=atan(y/x);
x=(pi/180)*x;
y=(pi/180)*y;
z=(pi/180)*z;
printf("Tu primer coordenada (r) vale:%f\n",r);
printf("Tu primer coordenada (a) vale:%f\n",a);
printf("Tu primer coordenada (p) vale:%f\n",p);
printf("La coordenada de x fue:%f\n",x);
printf("La coordenada de y fue:%f\n",y);
printf("La coordenada de z fue:%f\n",z);
return 0;
}
