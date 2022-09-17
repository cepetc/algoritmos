// Receber um valor inteiro do teclado e imprimir esse valor com reajuste de 10%.

#include<stdio.h>
main()
{
	// Declara as variaveis.
	int valor, resultado;
	
	// Recebe o valor a ser reajustado em 10%.
	printf("Digitar o valor a ser reajustado: \n");
	scanf("%d",&valor);
	
	// Calcula o reajusta de 10% em cima do valor recebido como parâmetro.
	resultado = (valor * 0.10);
	
	// Imprime o resultado reajustado.
	printf("O valor reajustado e: %d \n", resultado);
	return(0);
}
