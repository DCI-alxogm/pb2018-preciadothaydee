#include<stdio.h>
#include<stdlib.h>


void funcion();
void datos(float t1,float t2,float t3, float t4, int n,float T**);

void funcion(){
	float epsilon,w;
	int N,n=0,i,j;
	float t1, t2, t3, t4;
	float x[N],y[N],T[i][j];
	FILE datos*, resultados*;
	N=n*n;	


datos=fopen("informacion.txt","r");
fscanf(" %f %f %f %f %f %i ",&t1,&t2,&t3,&t4,&epsilon,&n);
fclose(first);

double *T= (double*)malloc(n*sizeof(double));
	for(i=0;i<n;i++){
T[i]=(double**)malloc(n*sizeof(double));
}

datos(t1, t2, t3, t4,n,T);


results=fopen("resultados.txt","w");
for(i=0;i<N;i++){
	while(w<epsilon){
	T[i][j]=(((T[i+1],[j]+T[i-1],[j]+T[i],y[i+1]+T[i],[j-1]))/4);
	w=((T[i][j]-T[i-1][j-1])/T[i-1][j-1]);
	fprintf("%f %f %f",x[i],y[j],T[i][j]);
}
}
fclose(results);
free(T);

}

void datos(float t1,float t2,float t3, float t4, int n,float T**);{
int i,j;
for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		if(i=0)
		T[i][j]=t1;
		
			else if(i=n)
			T[i][j]=t2;
			else if(j=0)
			T[i][j]=t3;
			else if(j=n)
			T[i][j]=t4;
			else
			T[i][j]=0;
	}
}
