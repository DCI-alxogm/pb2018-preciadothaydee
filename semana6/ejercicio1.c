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
int uno=0, dos=0, tres=0, cuatro=0, cinco=0, seis=0, siete=0, ocho=0, nueve=0;


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

for (i=0; i<N;i++){
	if 
	(semestre[i]== 1){
	uno+=1;
	}else if
	(semestre[i]== 2){
	dos+=1;
	}else if
	(semestre[i]== 3){
	tres+=1;
	}else if
	(semestre[i]== 4){
	cuatro+=1;
	}else if
	(semestre[i]== 5){
	cinco+=1;
	}else if
	(semestre[i]== 6){
	seis+=1;
	}else if 
	(semestre[i]== 7){
	siete+=1;
	}else if
	(semestre[i]== 8){
	ocho+=1;
	}else if
	(semestre[i]== 9){
	nueve+=1;
}
}

printf("El numero de mujeres es: %i \n", mujer);
printf("El numero de hombres es: %i \n", hombre);
printf("El promedio es: %i \n ", prom);
printf("El numero de estudiantes por semestre es: 1=%i, 2=%i, 3=%i, 4=%i, 5=%i, 6=%i, 7=%i, 8=%i 9=%i \n", uno, dos, tres, cuatro, cinco, seis, siete, ocho, nueve);
return 0;

}

