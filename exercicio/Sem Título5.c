#include<stdio.h>
main(){
	int conta;
	char ch;
	printf("digite uma letra-<X para sair>");
	for(conta=1;;conta++)
	{
	
	scanf("%c",&ch);
	
	
	if(ch=='x')break;
	else 
	printf("\nletra: %c\n",ch);
}
	return(0);
}
