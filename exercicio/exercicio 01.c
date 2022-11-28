//1.	Faça um programa que receba um valor qualquer e mostre o valor digitado e seu quíntuplo.
#include<stdio.h>
main()
{	
//declara a variavel
 int valorQualquer,  quintuplo;
 
//declara o valor qualquer
 	printf("Digite um numero:\n");
 	scanf("%d",&valorQualquer);
 	
// calcular seu quinteto.
 	quintuplo=(valorQualquer * 5 );
	 
// imprimir e resultado.
	printf("O seu resultado e: %d \n",quintuplo);

	return(0);
}
