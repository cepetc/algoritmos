// Faça um programa que receba a idade de duas pessoas e mostre o dobra da idade da primeira e a metade da idade da segunda.

#include<stdio.h>
main(){
	// Declara as variaveis.
	float idade1, idade2, resultadoDobro, resultadoMetade;
	
	// Faz a leitura da primeira idade.
	printf("Informe o valor da primeira idade: \n");
	scanf("%f",&idade1);
	
	// Faz a leitura da segunda idade.
	printf("Informe o valor da segunda idade: \n");
	scanf("%f",&idade2);
	
	// Calcular o dobro da primeira idade.
	resultadoDobro=(idade1*2);

	// Calcular a metade da segunda idade.
	resultadoMetade=(idade2/2);

	// imprime os resultados.
	printf("O dobro da primeira idade: %.2f \n",resultadoDobro);
	printf("A metade da segunda idade: %.2f \n",resultadoMetade);
		
	return(0);

}
