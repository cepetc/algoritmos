//Construa um algoritmo que escreva os divis�veis por X de 300 a 200. Onde o valor de X ser� fornecido pelo usu�rio.

#include<stdio.h>
main(){
	int x, num;
	printf("digite um numero");
	scanf("%d",&num);
	for(x=300;x>=200;x--)
	{
		if(x%num==0)
		printf("\nresolu�ao: %d",x);
	}
	return(0);
}
