/*Ejemplo numero 4*/
#include<stdio.h>

int main ()
int i,j, N=10;
float numeros[N];
{
for (j=0;j<N; j++){
scanf("%f", &numeros[j]);
numeros[j]*=2;
printf("%f\n", numeros[j]);
}
return 0;
}
