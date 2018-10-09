//En este programa se calculara el promedio de los numeros dados en un archivo 

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
FILE *archivo;
int i,n;
float sum;
n = 0;
sum = 0;
printf("Escribe el numero de datos que hay en tu archivo: ");
scanf("%d",&n);
float *ptr= (float*)malloc(n*sizeof(float));

archivo=fopen("promedio.txt","r");
for (i=0;i<n;i++){
	fscanf(archivo,"%f\n",&ptr[i]);
	}

fclose(archivo);
for (i=0;i<n;i++){
	sum += ptr[i];
}
	sum=sum/n;

printf("El promedio es: %f\n",sum);
free(ptr);
return 0;
}
