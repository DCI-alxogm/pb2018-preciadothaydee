#include<stdio.h>
#include<stdlib.h>
int main ()
{
int *ptr, i,n1,n2;
printf("Introduce el numero de elementos n1: ");
scanf("%d", &n2);
ptr=(int*)malloc(n1*sizeof(int));
printf("direccion de la memora reservada:");
for(i=0;i<n1;++i){
printf("%x\t", ptr +i);
}
ptr=realloc(ptr, n2);
for(i=0;i<n2;++i){
printf("%u\t",ptr+i);
}
free(ptr);
return 0;
}
