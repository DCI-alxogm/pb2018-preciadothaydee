#include<stdio.h>

int main()
{ 
int i, num[6], sum =0;
printf("Introduce 6 numeros enteros:\n");
for(i=0;i<6;++i);
{
//(num+i) es equvalente a &num[i]
scanf("%d", (num+1));
//*(num+i) es equivalente a num[i]
sum+=*(num+i);
}
printf("suma=%d",sum);
return 0;
}
