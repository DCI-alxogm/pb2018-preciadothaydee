/*ejemplo numero 1 de la semana 5*/

#include<stdio.h>
int main ()
{
float temp_C, temp_K;
float inicial, final,delta;
int n,i, start;
int op=1, count=0;

while(op==1){
count++; // count=count+1;
temp_K=0;
temp_C=inicial;
printf("Introduce tu temperatura inicial: \n");
scanf("%i", &inicial);
printf("Introduce tu temperatura final: \n");
scanf("%i", &final);
printf("introduce el numero de veces que quieres que se repita: \n");
scanf("%i", &n);
delta=(final-inicial)/n;
temp_C=inicial;
while(temp_C<=final){
temp_K=temp_C+273.15;
printf("%f %f\n", temp_C, temp_K);
temp_C=temp_C+delta;
}
delta=(final-temp_C)/n;
for(i=0;i<n;i++){
temp_K=temp_C+273.15;
printf("%f %f\n", temp_C, temp_K);
temp_C=temp_C+delta;     // temp_C+=delta;
}
printf("Si quieres realizar otra conversion pon un 1\n");
scanf("%i", &op);
if (count<5){
printf("numero de intentos excedido");
return (1);
}
return 0;
}
}

