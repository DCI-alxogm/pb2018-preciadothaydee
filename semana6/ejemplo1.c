/*Este es el ejemplo numero uno de la semana 6*/

#include<stdio.h>

int main()
{

int i,N=10;
float numeros[N];

for(i=0;i<N;i++){
numeros[i]=0.; //Asigna 0 a cada elemento del arreglo
}

for(i=0; i<N; i++){
scanf("%f",&numeros [i]);//Asigna el valor a partir de lo que proporciona el usuario linea por linea.
}

for (i=0;i<N;i++){
printf("%f\n",numeros[i]);
}
return 0;
}

