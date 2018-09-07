/*Programa2 hecho por Haydee Preciado */

#include<stdio.h>
int main()
{
    int i,y,a=1,n,x;
    while(y==1||2)
{
    
    printf("Pon el numero de que quieres saber su factorial\n");
    scanf("%i",&n);
    if (n<0)a=0;
    else if(n==0) a=1;
    else
{
    for(i=1;i<=n;i++)
{
    a=a*i;

    x=a;
}
    printf("\n el factorial es:%i",x);
}
    printf("Teclea 1 para continuar y 2 para salir\n");
    scanf("%i",&y);
}
return 0;

}
