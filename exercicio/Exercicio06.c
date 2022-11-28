//Informar um preço de um produto e calcular novo preço com desconto de 9% .
#include<stdio.h>
main()
{
//declaração das variaveis
	int preco, desconto;
//receber o valor do desconto de 9%.
 printf("digite o valor do produto:\n");
scanf("%d",&preco);
//calcula o descondo de 9% do produto.
desconto=(preco*0.9);

//imprimir o valor do produto com desconto.
 printf("o novo preco e: %d \n",desconto);	
	return(0);
	
}
