//Construa um algoritmo que escreva os divisíveis por X de 300 a 200. Onde o valor de X será fornecido pelo usuário.

#include<stdio.h>
main(){
	int x, num;
	printf("digite um numero");
	scanf("%d",&num);
	for(x=300;x>=200;x--)
	{
		if(x%num==0)
		printf("\nresoluçao: %d",x);
	}
	return(0);
}
