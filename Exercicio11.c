//Faça um programa que receba a hora e transforme em minutos.
#include<stdio.h>
main()
{
	int hora, minutos;
	
	 //receba o valor da hora
	 printf("Digite a hora: \n ");
	 scanf("%d",&hora);
	 
	 //convercao de hora para minutos.
	 minutos=(hora * 60);
	 
	 //imprimir em minutos.
	 printf("sao: %d \n min",minutos);
	 
	return(0);
}
