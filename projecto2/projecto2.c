#include<stdio.h>//Se incluyen las librerias necesarias
#include<math.h>
#include<stdlib.h>



int main(){
	int i=0,a=0,y,x,N; //Se inicializan los contadores que se usaran
	float l,r, u, d;

	FILE *info;//Se indica que archivos se utilizaran
	FILE *resultados;



info=fopen("informacion.txt","r");//Se abre el archivo con la informacion necesaria
fscanf(info,"%f %f %f %f %f %i",&l,&r,&u,&d,&N);//Se guardan los datos del documento
fclose(info);

double **T = (double**)malloc(N*sizeof(int*));//Se reserva el espacio de memoria
	

float area[N][N]; //Se inicializa
	for(y=0; y<N; y++){
          for(x=0; x<N; x++){
              area[x][y]=0;
 
}
        }

	for(y=0;y<N;y++){
		area[0][y]=u;
		area[N-1][y]=d;
	}
	for(x=0;x<N;x++){
		area[x][0]=l;
		area[x][N-1]=r;
	}
	while(i<5){ 
	while(area[2][2]<l-1){ 
		     char buffer[30]; 
        while(a<2) {

		
	for(y=1; y<N-1; y++){
		for(x=1; x<N-1; x++){
			area[x][y]=(area[x+1][y]+area[x-1][y]+area[x][y+1]+area[x][y-1])/4;
		}
	}

                snprintf(buffer, sizeof(char)*30, "resultados%i", a);//SE van guardando los resultados de cada vez en un archivo diferente
                a++;

	resultados=fopen(buffer,"w");
	for(y=0; y<N; y++){
                for(x=0; x<N; x++){
			fprintf(resultados, "%f ", area[x][y]);
		}
		fprintf(resultados, "\n");
	}
	}
	fclose(resultados);//Se cierra el archivo de resultados
	a=0;
	}
	i++;
	a=0;
	}
free(T);//Se libera la memoria
	
return 0;
}



