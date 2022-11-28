//Desenvolva um programa que leia a cotação do dólar, leia um valor em dólares, converta esse valor para Real e Mostre o resultado.

#include<stdio.h>
main()
{
	//decalracao das variaveis.
	 int  valorDodolar, conversao;
	 
	 //receba o valor do dolar.
	 printf("Digite o valor em dolar:US$ \n");
	 scanf("%d",&valorDodolar);
	 
	 //convercao de dolar para real.
	 conversao=(valorDodolar * 5.25);
	 
	 //imprimir o valor em real.
	 printf("O resultado em real e: %d \n R$",conversao);
	 
	return(0);
}
