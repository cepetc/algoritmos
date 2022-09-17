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
