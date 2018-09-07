/*programa 1 hecho por Haydee Preciado*/

#include<stdio.h>
#include<math.h>

int main()
{
int n,i;
float x,d, l, s, q, r, a, y, z;
        
	printf("Escribe el limite inferior:\n");
	scanf("%f", &y);
	printf("Escribe el limite superior: \n");
	scanf("%f", &z);
	printf("Escribe el espaciado que quieres:\n");
	scanf("%f", &d);
n=((z-y)/d);
for(i=0;i<=n;i++)
{

     x=(y+(d*i));
     l=exp(x);
     s=log(x);
     q=sin(x);
     r=cos(x);
     a=sqrt(x);
     printf("El número es %f \n", x); 
     printf("El exponente es: %f \n", l);
     printf("El logaritmo es:%f \n", s);
     printf("El seno es: %f \n", q);
     printf("El coseno es:%f \n", r);
     printf("La raíz es: %f \n", a);
}
return 0;
}
