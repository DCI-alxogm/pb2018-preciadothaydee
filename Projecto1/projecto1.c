/*projecto numero uno de programacion básica*/

#include<stdio.h>
#include<math.h>
/*Se declaran las variables*/
int main(){
float G=39.47841,h;
int n=1000,i,o;
double a1,a2,a3,a4,a5,a6;
double a[n],b[n],c[n],x[n],y[n],z[n],r;
FILE *planeta;
FILE *resultado;

/*Se utiliza un condicional if para saber que orbita se desea calcular*/
printf("Escoge que orbita quieres calcular: \ntierra[1] \nmercurio[2] \nvenus[3]  \nmarte[4] \njupiter[5] \nsaturno[6] \nurano[7] \nneptuno[8] \n");
scanf("%i",&o);

if(o==1)
{
	planeta=fopen("datos.txt","r"); 
	fscanf(planeta,"%lf %lf %lf %lf %lf %lf %f ",&a1,&a2,&a3,&a4,&a5,&a6,&h);
	printf("Prueba datos iniciales %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\t  \n",a1,a2,a3,a4,a5,a6,h);
	fclose(planeta);
	
	a[0]=a1; 
	b[0]=a2;
	c[0]=a3;
	x[0]=a4;
	y[0]=a5;
	z[0]=a6;
	resultado=fopen("resultado.txt","w"); 
		for(i=1;i<n;i++) 
	{
	  
    	   
	    a[i]=a[i-1]+x[i-1]*h; 
	    b[i]=b[i-1]+y[i-1]*h;
	    c[i]=c[i-1]+z[i-1]*h;
  	    r=sqrt(pow(a[i-1],2)+pow(b[i-1],2)+pow(c[i-1],2));/*Se calcula el radio con el que se trabajara*/	  
	    x[i]=x[i-1]-h*((G*a[i-1])/pow(r,3));
	    y[i]=y[i-1]-h*((G*b[i-1])/pow(r,3));
	    z[i]=z[i-1]-h*((G*c[i-1])/pow(r,3));

	    fprintf(resultado," %lf\t %lf\t %lf\t %lf\t %lf\t %lf\n",a[i],b[i],c[i],x[i],y[i],z[i]);/*Se imprimen los resultados para poder graficar*/
	}
	    fclose(resultado);
}

if(o==2)
{
	planeta=fopen("mercurio.txt","r"); 
	fscanf(planeta,"%lf %lf %lf %lf %lf %lf %f ",&a1,&a2,&a3,&a4,&a5,&a6,&h);
	printf("Prueba datos iniciales %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\t  \n",a1,a2,a3,a4,a5,a6,h);
	fclose(planeta);
	
	a[0]=a1; 
	b[0]=a2;
	c[0]=a3;
	x[0]=a4;
	y[0]=a5;
	z[0]=a6;
	resultado=fopen("resultado.txt","w"); 
		for(i=1;i<n;i++) 
	{
	  
    	   
	    a[i]=a[i-1]+x[i-1]*h; 
	    b[i]=b[i-1]+y[i-1]*h;
	    c[i]=c[i-1]+z[i-1]*h;
  	    r=sqrt(pow(a[i],2)+pow(b[i],2)+pow(c[i],2));	  
	    x[i]=x[i-1]-h*((G*a[i-1])/pow(r,3));
	    y[i]=y[i-1]-h*((G*b[i-1])/pow(r,3));
	    z[i]=z[i-1]-h*((G*c[i-1])/pow(r,3));

	    fprintf(resultado," %lf\t %lf\t %lf\t %lf\t %lf\t %lf\n",a[i],b[i],c[i],x[i],y[i],z[i]);
	}
	    fclose(resultado);
}

if(o==3)
{
	planeta=fopen("venus.txt","r"); 
	fscanf(planeta,"%lf %lf %lf %lf %lf %lf %f ",&a1,&a2,&a3,&a4,&a5,&a6,&h);
	printf("Prueba datos iniciales %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\t  \n",a1,a2,a3,a4,a5,a6,h);
	fclose(planeta);
	
	a[0]=a1; 
	b[0]=a2;
	c[0]=a3;
	x[0]=a4;
	y[0]=a5;
	z[0]=a6;
	resultado=fopen("resultado.txt","w"); 
		for(i=1;i<n;i++) 
	{
	  
    	   
	    a[i]=a[i-1]+x[i-1]*h; 
	    b[i]=b[i-1]+y[i-1]*h;
	    c[i]=c[i-1]+z[i-1]*h;
  	    r=sqrt(pow(a[i],2)+pow(b[i],2)+pow(c[i],2));	  
	    x[i]=x[i-1]-h*((G*a[i-1])/pow(r,3));
	    y[i]=y[i-1]-h*((G*b[i-1])/pow(r,3));
	    z[i]=z[i-1]-h*((G*c[i-1])/pow(r,3));

	    fprintf(resultado," %lf\t %lf\t %lf\t %lf\t %lf\t %lf\n",a[i],b[i],c[i],x[i],y[i],z[i]);
	}
	    fclose(resultado);
}
if(o==4)
{
	planeta=fopen("marte.txt","r"); 
	fscanf(planeta,"%lf %lf %lf %lf %lf %lf %f ",&a1,&a2,&a3,&a4,&a5,&a6,&h);
	printf("Prueba datos iniciales %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\t  \n",a1,a2,a3,a4,a5,a6,h);
	fclose(planeta);
	
	a[0]=a1; 
	b[0]=a2;
	c[0]=a3;
	x[0]=a4;
	y[0]=a5;
	z[0]=a6;
	resultado=fopen("resultado.txt","w"); 
		for(i=1;i<1000;i++) 
	{
	  
    	   
	    a[i]=a[i-1]+x[i-1]*h; 
	    b[i]=b[i-1]+y[i-1]*h;
	    c[i]=c[i-1]+z[i-1]*h;
  	    r=sqrt(pow(a[i],2)+pow(b[i],2)+pow(c[i],2));	  
	    x[i]=x[i-1]-h*((G*a[i-1])/pow(r,3));
	    y[i]=y[i-1]-h*((G*b[i-1])/pow(r,3));
	    z[i]=z[i-1]-h*((G*c[i-1])/pow(r,3));

	    fprintf(resultado," %lf\t %lf\t %lf\t %lf\t %lf\t %lf\n",a[i],b[i],c[i],x[i],y[i],z[i]);
	}
	    fclose(resultado);
}
if(o==5)
{
	planeta=fopen("jupiter.txt","r"); 
	fscanf(planeta,"%lf %lf %lf %lf %lf %lf %f ",&a1,&a2,&a3,&a4,&a5,&a6,&h);
	printf("Prueba datos iniciales %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\t  \n",a1,a2,a3,a4,a5,a6,h);
	fclose(planeta);
	
	a[0]=a1; 
	b[0]=a2;
	c[0]=a3;
	x[0]=a4;
	y[0]=a5;
	z[0]=a6;
	resultado=fopen("resultado.txt","w"); 
		for(i=1;i<1000;i++) 
	{
	  
    	   
	    a[i]=a[i-1]+x[i-1]*h; 
	    b[i]=b[i-1]+y[i-1]*h;
	    c[i]=c[i-1]+z[i-1]*h;
  	    r=sqrt(pow(a[i],2)+pow(b[i],2)+pow(c[i],2));	  
	    x[i]=x[i-1]-h*((G*a[i-1])/pow(r,3));
	    y[i]=y[i-1]-h*((G*b[i-1])/pow(r,3));
	    z[i]=z[i-1]-h*((G*c[i-1])/pow(r,3));

	    fprintf(resultado," %lf\t %lf\t %lf\t %lf\t %lf\t %lf\n",a[i],b[i],c[i],x[i],y[i],z[i]);
	}
	    fclose(resultado);
}
if(o==6)
{
	planeta=fopen("saturno.txt","r"); 
	fscanf(planeta,"%lf %lf %lf %lf %lf %lf %f ",&a1,&a2,&a3,&a4,&a5,&a6,&h);
	printf("Prueba datos iniciales %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\t  \n",a1,a2,a3,a4,a5,a6,h);
	fclose(planeta);
	
	a[0]=a1; 
	b[0]=a2;
	c[0]=a3;
	x[0]=a4;
	y[0]=a5;
	z[0]=a6;
	resultado=fopen("resultado.txt","w"); 
		for(i=1;i<1000;i++) 
	{
	  
    	   
	    a[i]=a[i-1]+x[i-1]*h; 
	    b[i]=b[i-1]+y[i-1]*h;
	    c[i]=c[i-1]+z[i-1]*h;
  	    r=sqrt(pow(a[i],2)+pow(b[i],2)+pow(c[i],2));	  
	    x[i]=x[i-1]-h*((G*a[i-1])/pow(r,3));
	    y[i]=y[i-1]-h*((G*b[i-1])/pow(r,3));
	    z[i]=z[i-1]-h*((G*c[i-1])/pow(r,3));

	    fprintf(resultado," %lf\t %lf\t %lf\t %lf\t %lf\t %lf\n",a[i],b[i],c[i],x[i],y[i],z[i]);
	}
	    fclose(resultado);
}

if(o==7)
{
	planeta=fopen("urano.txt","r"); 
	fscanf(planeta,"%lf %lf %lf %lf %lf %lf %f ",&a1,&a2,&a3,&a4,&a5,&a6,&h);
	printf("Prueba datos iniciales %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\t  \n",a1,a2,a3,a4,a5,a6,h);
	fclose(planeta);
	
	a[0]=a1; 
	b[0]=a2;
	c[0]=a3;
	x[0]=a4;
	y[0]=a5;
	z[0]=a6;
	resultado=fopen("resultado.txt","w"); 
		for(i=1;i<1000;i++) 
	{
	  
    	   
	    a[i]=a[i-1]+x[i-1]*h; 
	    b[i]=b[i-1]+y[i-1]*h;
	    c[i]=c[i-1]+z[i-1]*h;
  	    r=sqrt(pow(a[i],2)+pow(b[i],2)+pow(c[i],2));	  
	    x[i]=x[i-1]-h*((G*a[i-1])/pow(r,3));
	    y[i]=y[i-1]-h*((G*b[i-1])/pow(r,3));
	    z[i]=z[i-1]-h*((G*c[i-1])/pow(r,3));

	    fprintf(resultado," %lf\t %lf\t %lf\t %lf\t %lf\t %lf\n",a[i],b[i],c[i],x[i],y[i],z[i]);
	}
	    fclose(resultado);
}
if(o==8)
{
	planeta=fopen("neptuno.txt","r"); 
	fscanf(planeta,"%lf %lf %lf %lf %lf %lf %f ",&a1,&a2,&a3,&a4,&a5,&a6,&h);
	printf("Prueba datos iniciales %lf\t %lf\t %lf\t %lf\t %lf\t %lf\t %f\t  \n",a1,a2,a3,a4,a5,a6,h);
	fclose(planeta);
	
	a[0]=a1; 
	b[0]=a2;
	c[0]=a3;
	x[0]=a4;
	y[0]=a5;
	z[0]=a6;
	resultado=fopen("resultado.txt","w"); 
		for(i=1;i<1000;i++) 
	{
	  
    	   
	    a[i]=a[i-1]+x[i-1]*h; 
	    b[i]=b[i-1]+y[i-1]*h;
	    c[i]=c[i-1]+z[i-1]*h;
  	    r=sqrt(pow(a[i],2)+pow(b[i],2)+pow(c[i],2));	  
	    x[i]=x[i-1]-h*((G*a[i-1])/pow(r,3));
	    y[i]=y[i-1]-h*((G*b[i-1])/pow(r,3));
	    z[i]=z[i-1]-h*((G*c[i-1])/pow(r,3));

	    fprintf(resultado," %lf\t %lf\t %lf\t %lf\t %lf\t %lf\n",a[i],b[i],c[i],x[i],y[i],z[i]);
	}
	    fclose(resultado);
}


return 0;/*Finaliza en programa*/
}
