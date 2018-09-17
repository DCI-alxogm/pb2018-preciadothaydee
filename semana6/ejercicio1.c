/*Ejercicio numero 1 de la semana 6*/

#include<stdio.h>

int main ()
{
int i, N=10;
float estudiantes[N];
float edad[N];
int sexo[N];
int promedio[N];
int semestre[N];
int mujer=0, hombre=0, prom;
int primero, segundo, tercero, cuarto, quinto, sexto, septimo, octavo, noveno;


printf("Cual es tu edad?: \n");
for(i=0;i<N;i++){
scanf("%i",&edad[i]);
}

printf("En que semestre vas?: \n");
for(i=0;i<N;i++){
scanf("%i",&semestre[i]);
}

printf("si eres mujer pon un 1 y si eres hombre pon 0\n");
for(i=0;i<N;i++){
scanf("%i", &sexo[i]);
}

printf("cual es tu promedio: \n");
for(i=0;i<N;i++){
scanf("%i", &promedio[i]);
}

for(i=0; i<N;i++){
if (sexo[i]==1){mujer++;}
else {hombre++;}
}
prom=0;
for (i=0; i<N;i++){
prom=prom+promedio[i];
}
prom=prom/N;

printf("El numero de mujeres es: %i \n", mujer);
printf("El numero de hombres es: %i \n", hombre);
printf("El promedio es: %i \n ", prom);
printf("El numero de estudiantes por semestre es: %i \n",semestre);
for (i=0; i<N;i++){
	if semestre[i]= uno;
	uno+=1:
	else if semestre[i]= uno;
	uno+=1:

return 0;

}

