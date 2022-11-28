#include<stdio.h>
main()
{
	float salario, prestacao, C;
	printf("digite o salario:");
	scanf("%f", &salario);
	printf("qual o valor que voce quer pagar:");
	scanf("%f", &prestacao);
	C=salario*30/100;
	if (salario<C)
	printf("\n a prestacao pode ser concedida.valor menor que 30%%:");
	else
	printf("\n na prestacao nao pode ser concedida pois o valor e maior que 30%%:");
	return(0);
	
}
