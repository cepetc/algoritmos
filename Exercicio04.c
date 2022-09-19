// Informar 3 números inteiros e imprimir a média.

#include<stdio.h>
main()
{
	// Declara as variaveis
	float numero1, numero2, numero3, media;
	 
	 // Captura o primeiro nï¿½mero.
	 printf("Informe o primeiro numero: \n");
	 scanf("%f",&numero1);
	 
	 // Captura o segundo nï¿½mero.
	 printf("Informe o segundo numero: \n");
	 scanf("%f",&numero2);
	 
	 // Captura o terceiro nï¿½mero.
	 printf("Informe o terceiro numero: \n");
	 scanf("%f",&numero3);
	 
	 media = (numero1 + numero2 + numero3) / 3;
	 
	 // Impressï¿½o do resultado da mï¿½dia	 
	 printf("Resultado: %.2f\n", media);
	 
	 
	return(0);
}
