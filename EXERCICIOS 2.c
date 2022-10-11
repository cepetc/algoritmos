#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int num,raiz,quadrado;
	printf("Digite um  numero: ");
	scanf("%d",&num);
	if(num>=0)
	{
		raiz=sqrt(num);
		printf("Numero positivo ou igual a 0: %d raiz:%d",num,raiz);
	}
else
{
	quadrado=pow(num,2);
	printf("Numero negativo: %d e quadrado: %d", num,quadrado);
}
return(0);
}
