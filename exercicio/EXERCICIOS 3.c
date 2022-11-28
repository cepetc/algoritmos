#include<stdio.h>
main()
{
	int num;
	printf("digite um numero:");
	scanf("%d", &num);
	if(num%3==0)
	printf("o numero digitado e multiplo de 3: %d", num);
	else
	printf("o numero digitado nao e multiplo de 3: %d", num);
	return(0);
}
