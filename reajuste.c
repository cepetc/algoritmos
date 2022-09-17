#include<stdio.h>
main()
{
	int num, reaj, R;
	
	printf("\n coloque um valor:");
	scanf("%d",&num);
	reaj=10/100;
	R=(num/reaj)/100;
	printf("\n o valor depois do reajuste sera:%d");
	return(0);
}
