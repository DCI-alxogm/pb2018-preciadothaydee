/*creado el 24 de agosto*/

#include<stdio.h>

 

int  main()

{

int num1, num2;

printf("Introduzca dos numeros enteros: \n");

scanf("%i %i", &num1, &num2);


if(num1==num2)

{

printf("Resultado; %d",num1,num2);

}

else if (num1> num2)

{

printf("Resultado: %d > %d", num1,num2);

}

else

{

printf("Result: %d < %d",num1, num2);

}

return 0;

}
