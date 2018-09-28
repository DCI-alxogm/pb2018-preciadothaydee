#include<stdio.h>
#include<math.h>

int main ()

float G, Pi, masa,h;
Pi=3.14
G=4*(pow(Pi,2));
h=0.001;
masa=0.000003;
int i,n;
double a1,a2,a3,a4,a5,a6;
double a[N], b[N], c[N], x[N], y[N], z[N];

FILE *planeta;
FILE *resultado;

planeta=fopen("planeta.txt", "r");
fscanf(planeta, "%lf %lf %lf %lf %lf %lf", &a1, &a2, &a3, &a4, &a5, &a6);
fclose(planeta);
r=sqrt(pow(a1,2)+pow(a2,2)+pow(a3,2);

a[0]=a1;
b[0]=a2;
c[0]=a3;
x[0]=a4;
y[0]=a5;
z[0]=a6;

resultados=fopen("resultados.txt","w");
for(i=1; i<1000;i++){
r=sqrt
a[i]=a[i-1]+x[i-1]*h;
b[i]=b[i-1]+y[i-1]*h;
c[i]=c[i-1]+z[i-1]*h;


