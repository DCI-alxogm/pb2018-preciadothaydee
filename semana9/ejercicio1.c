/*Este programa encontrara el numero mayor entre una lista de numeros dados en otro archivo*/

#include<stdio.h>
#include<stdlib.h>

int main(){
FILE *archivo;
int i,num,o;
float a,b,c;
num = 0;


printf("Escribe el numero de datos que existen en tu archivo: ");
scanf("%d",&num);
float *ptr= (float*)malloc(num*sizeof(float));//Se reserva la memoria

archivo=fopen("num_maximo.txt","r");//abre el archivo
for (i=0;i<num;i++){
	fscanf(archivo,"%f\n",&ptr[i]);

if (i==1){
	a=ptr[i-1];
	b=ptr[i];
if(b<=a)
	c=a;
else 
	c=b;
}
if(i>1)
	b=ptr[i];
if(c<b)
	c=b;
else
	c=c;
}
fclose(archivo);//ciera el



printf("El numero mayor es: %f\n",c);//imprime el resultado
free(ptr);//libera la memoria
return 0;
}
