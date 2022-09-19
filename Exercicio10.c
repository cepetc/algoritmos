//Faça um programa que receba 5 números e mostre a soma deles e os resultados dos 5 números.

#include<stdio.h>
main()
{
		// Declara as variaveis
	float numero1, numero2, numero3, numero4, numero5, soma;
	 
	 // Captura o primeiro numero.
	 printf("Informe o primeiro numero: \n");
	 scanf("%f",&numero1);
	  // Captura o segundo numero.
	 printf("Informe o segundo numero: \n");
	 scanf("%f",&numero2);
	  // Captura o terceiro numero.
	 printf("Informe o terceiro numero: \n");
	 scanf("%f",&numero3);
	  // Captura o quarto numero.
	 printf("Informe o quarto numero: \n");
	 scanf("%f",&numero4);
	  // Captura o quinto numero.
	 printf("Informe o quinto numero: \n");
	 scanf("%f",&numero5);
	 
	
	 soma = (numero1 + numero2 + numero3 + numero4 + numero5);
	 
	 // Impressa
	 o do resultado da soma	 
	 printf("Resultado: %.2f\n",soma);
	 
	return(0);
	
}
