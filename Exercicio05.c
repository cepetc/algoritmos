// Faça um programa que receba o valor de um produto à vista com desconto de 5%.
#include<stdio.h>
main()
{
// declaração das variaveis
int valor, desconto;
//receber o valor do desconto de 5%.
 printf("digite o valor do produto:\n");
scanf("%d",&valor);
//calcula o descondo de 5% do produto.
desconto=(valor*0.5);

//imprimir o valor do produto com desconto.
 printf("o novo valor e: %d \n",desconto);	

	return(0);
}
