#include<stdio.h>
main()
{  
	int x1,x2, soma, op;
	printf("digite dois numeros:");
	scanf("%d%d", &x1, &x2);
	soma=x1+x2;
	if(soma>20)
	{
		op=soma+8;
		printf("%d=8=%d\nmaior que 20",soma,op);
	}
	else
	{
		op=soma-5;
		printf("%d+5=%d\nmenor que 20", soma,op);
	}
	return(0);
}

