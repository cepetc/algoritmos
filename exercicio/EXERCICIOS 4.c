#include<stdio.h>
main()
{
	int num;
	printf("digite um numero:");
	scanf("%d", &num);
	if(num%5==0)
	printf("o numero digitado e divisivel por 5: %d", num);
	else
	printf("o numero digitado nao e divisivel por 5: %d", num);
	return(0);
}
