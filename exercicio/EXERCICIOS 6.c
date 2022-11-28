#include<stdio.h>
main()
{
	int numA,numB;
	printf("digite dois numeros:");
	scanf("%d%d", &numA, &numB);
	if(numA<numB)
	printf("o numero %d e menor que %d", numA, numB);
	else
	printf("o numero %d e maior que %d", numA, numB);
	return(0);
}
