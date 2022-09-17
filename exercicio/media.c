#include<stdio.h>
main()
{
	float numero1, numero2, numero3, media;
	 
	 // Captura o primeiro número.
	 printf("Informe o primeiro numero: \n");
	 scanf("%f",&numero1);
	 
	 // Captura o segundo número.
	 printf("Informe o segundo numero: \n");
	 scanf("%f",&numero2);
	 
	 // Captura o terceiro número.
	 printf("Informe o terceiro numero: \n");
	 scanf("%f",&numero3);
	 
	 media = (numero1 + numero2 + numero3) / 3;
	 
	 // Impressão do resultado da média	 
	 printf("Resultado: %.2f\n", media);
	 
	 
	return(0);
}
