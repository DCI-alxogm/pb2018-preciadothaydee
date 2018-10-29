#include<stdio.h>//Se incluyen las librerias necesarias
#include<math.h>
#include<stdlib.h>



void funcion(){
	float epsilon,x=1;//Se declaran las variables que se utilizaran
	int N,n=0,i,j,mas;
	float ti,t2,t3,t4,a,t;
	char num[25];


	FILE *datos;//Se indica que archivos se utilizaran
	FILE *resultados;
	FILE *inicial;	


datos=fopen("informacion.txt","r");//Se abre el archivo con la informacion necesaria
fscanf(first,"%f %f %f %f %f %i",&t1,&t2,&t3,&t4,&epsilon,&n);//Se guardan los datos del documento
fclose(first);



double **T = (double**)malloc(n*sizeof(int*));//Se reserva el espacio de memoria
	for(i=1;i<=n;i++){//Pimer ciclo for del archivo
	T[i]=(double*)malloc(n*sizeof(int));
}	


inicial=fopen("inicial.txt","w");//Se abre un archivo nuevo
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){//SE usa un condicional 
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
			fprintf(inicial,"%lf",T[i][j]);
			}
		fprintf(inicial,"\n");
		}
fclose(inicial);
N=n*n;


	while(fabs(x)>=epsilon){	
	if(plus%25==0){
		sprintf(num,"%i.ods",n);
		resultados=fopen("resultados.txt","w");//SE imprimen los resultados en el archivo de resulatados
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
	fclose(resultados);//Se cierra archivo 
	}

free(T);//Se libera la memoria
}
