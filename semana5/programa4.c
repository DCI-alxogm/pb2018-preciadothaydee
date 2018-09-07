/*Programa 4 hecho por Haydee*/

#include <stdio.h>
int main()
{
int x,y,z,a,b;
printf("Especifica tu limite inferior: \n");
scanf("%i", &x);	
printf("Espicifica tu limite superior: \n");
scanf("%i", &y); 
for (int b=x;b<=y;b++){
 int a=0;
 for(int z=1;z<=100;z++)
 {
     if(b%z==0) 
     a++;
 }
 if (a==2){ 
	 printf("%d, ", b);
 }
 }
return 0;
}
