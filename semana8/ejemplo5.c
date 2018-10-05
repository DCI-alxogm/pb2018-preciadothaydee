#include<stdio.h>
#include<stdlib.h>

int main ()
{
int num, i, *ptr, sum=0;

printf("introduce el numero de elementos: ");
scanf("%d", &num);

ptr=(int*)calloc(num,sizeof(int));
if(ptr== NULL)
{
printf("Error!memoria no reservada");
exit(0);
}
printf("Introduce los elementos del arreglo: ");
for(i=0;i<num;++i)
{
scanf("%d", ptr +i);
sum+=*(ptr+1);
}
printf("Sum=%d", sum);
free(ptr);
return 0;
}
