#include<stdio.h>
void main()
{
	int n,k,prod;
	scanf("%d%d",&n,&k);
	prod=n*k;
	if(prod%2==0)
	printf("even");
	else
	printf("odd");
}
