#include<stdio.h>
main(){
	int numero, x;
	char ch;
	printf("digite um valor:");
	scanf("%c",&x);
	for(numero=300;;numero++)
	{	
	scanf("%c",&ch);	
	if(ch*x)break;
	else 
	printf("\ncalor: %c\n",ch);
}	
	return(0);
}
