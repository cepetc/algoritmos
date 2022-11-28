// Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual. Calcule e imprima a idade dessa pessoa.

#include<stdio.h>
main()
{
	int anoDeNascimento, anoAtual, idade;
	
	printf("\n coloque o ano de nacimento:");
	scanf("%d",&anoDeNascimento);
	printf("\n coloque o ano atual:");
	scanf("%d",&anoAtual);
	
	idade = (anoDeNascimento - anoAtual);
	
	printf("\n sua idade atual e: %d");
	
	return(0);

}
