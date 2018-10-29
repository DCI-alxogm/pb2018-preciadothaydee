#include<stdio.h>
#include<stdlib.h>
#include<math.h>


void funcion(){
	float epsilon,x=1;
	int N,n=0,i,j,mas;
	float ti,t2,t3,t4,a,t;
	char num[25];


	FILE *datos;
	FILE *resultados;
	FILE *inicial;	


datos=fopen("informacion.txt","r");
fscanf(first,"%f %f %f %f %f %i",&t1,&t2,&t3,&t4,&epsilon,&n);
fclose(first);



double **T = (double**)malloc(n*sizeof(int*));
	for(i=1;i<=n;i++){
	T[i]=(double*)malloc(n*sizeof(int));
}	


inicial=fopen("inicial.txt","w");
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i=1)
			T[i][j]=t1;
			else if(i=n)
			T[i][j]=t2;
			else if(j=1)
			T[i][j]=t3;
			else if(j=n)
			T[i][j]=t4;
			else
			T[i][j]=0;
			fprintf(in,"%lf",T[i][j]);
			}
		fprintf(in,"\n");
		}
fclose(in);
N=n*n;


	while(fabs(x)>=epsilon){	
	if(plus%25==0){
		sprintf(num,"%i.ods",n);
		resultados=fopen("resultados.txt","w");
		}

		for(i=1;i<=n-1;i++)
	{
			for(j=1;j<=n-1;j++)
			{ 
				a=T[i][j];
			
				T[i][j]=((T[i+1][j]+T[i-1][j]+T[i][j+1]+T[i][j-1])/4);
				t=(T[i][j]-a)/a;
				if(t<x){
					x=t;
				}
		


		}	
	}

		for(i=1;i<=n-1;i++)
        {
                        for(j=1;j<=n-1;j++)
                        {
				if(mas%25==0){
					fprintf(resultados,"%f",T[i][j]);
					}
			}
			if(mas%25==0){
                                   fprintf(resultados,"\n");
				}
			}		
		mas++;
		if(mas%25==0){
		N++;
		}
	fclose(resultados);
	}

free(T);
}
