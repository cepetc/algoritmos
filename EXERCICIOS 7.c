#include<stdio.h>
main()
{
	int num;
	printf("digite um numero:");
	scanf("%d", &num);
	if(num%3==0 && num%7==0)
	printf("o numero digitado e divisivel por 3 e 7: %d", num);
	else
	printf("o numero digitado nao e divisivel por 3 e 7: %d", num);
	return(0);
}
