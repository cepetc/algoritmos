//Desenvolva um programa que armazene o valor 10 em uma vari�vel A e o valor 20 em uma vari�vel B. A seguir (utilizando apenas atribui��es entre vari�veis) troque os seus conte�dos fazendo com que o valor que est� em A passe para B e vice-versa. Ao final, escrever os valores que ficaram armazenados nas vari�veis. 
#include<stdio.h>
main()
{
	int a=10, b=20, c;
	c=a;
	a = b;
	b = c;
	printf("valor de a=%d e b=%d",a,b);

	
	return(0);

}
