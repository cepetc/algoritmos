//Desenvolva um programa para ler as dimens�es de um ret�ngulo (base e altura), o usu�rio dever� informar os dados e o programa dever� dar o resultado da �rea do ret�ngulo.

#include<stdio.h>
main(){
	//declaracao das variaveis.
	int  valorDabase, valorDaaltura, resultado;
	 
	 //imprimir o valor digitado 
	 printf("digite o valor da base:\n");
	 scanf("%d",&valorDabase);
	 
	 //imprimir o valor digitado 
	 
	 printf("digite o valor da altura:\n");
	 scanf("%d",&valorDaaltura);
	 
	 //calcula o resutado de base * altura.
	 
	 resultado=(valorDabase * valorDaaltura);
 
 	//imprimir o resutado.
 
 	printf("resutado e: %d \n",resultado);	
	
	return(0);
	
}
