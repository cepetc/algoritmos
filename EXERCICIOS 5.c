#include<stdio.h>
main()
{
	int numA,numB;
	printf("digite dois numeros:");
	scanf("%d%d", &numA, &numB);
	if(numA%numB==0)
	printf("o numero %d e divisivel por %d", numA, numB);
	else
	printf("o numero %d nao e divisivel por %d", numA, numB);
	return(0);
}
