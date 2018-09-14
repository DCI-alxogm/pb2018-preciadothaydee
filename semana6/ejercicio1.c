/*Ejercicio numero 1 de la semana 6*/

#include<stdio.h>

int main ()
{
int i, N=10;
float estudiantes[N];
float edad[N];
float sexo[N];
float promedio[N];
float semestre[N];
int mujer, hombre;
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
printf("El numero de mujeres es: \n", mujer);
printf("El numero de hombres es: \n", hombre);
printf("El promedio es:\n", promedio);
printf("El numero de estudiantes por semestre es: \n",semestre);

return 0;

}

