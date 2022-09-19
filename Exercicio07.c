//Desenvolva um programa para ler as dimensões de um retângulo (base e altura), o usuário deverá informar os dados e o programa deverá dar o resultado da área do retângulo.

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
