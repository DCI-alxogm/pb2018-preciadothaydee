#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{

	printf("El nombre del archivo que se ejecuta es: %s\n",argv[0]);
	char *archivo;
	float xinicial,yinicial,zinicial,xfinal,yfinal,zfinal,h;
	int i,n=0;
	float *x = (float*)malloc(num*sizeof(float));
	float *y = (float*)malloc(num*sizeof(float));
	float *z = (float*)malloc(num*sizeof(float));
	FILE *fp;

	if(argc==4){
		

	archivo=argv[1];
		n=atoi(argv[2]);
		h=atof(argv[3]);
		
		printf("El nombre del archivo que se quiere abrir es: %s\n",archivo);
		printf("Escribe los valores de xinicial,yinicial,zinicial: \n");
		scanf("%f",&x[0]);
		
		y[0]=x[0];
		z[0]=x[0];
		printf("Abrir");
		fp=fopen(archivo,"w+");
		
		
	for(i=1;i<n;i++){
		x[i]=(float)i;
		y[i]=x[i];
		z[i]=x[i];
		fprintf(fp,"%d \t x: %f, \t y: %f, \t  z: %f, \n",i,x[i],y[i],z[i]);
	}
		fclose(fp);
	}
	else if(argc>4){
	printf("Diste mas argumentos  \n");
	}

	else {
	printf("Se requieren los argumentos: nombre_archivo, num, h \n");
	}
	

return 0;
	}
