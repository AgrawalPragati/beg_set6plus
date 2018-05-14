#include<stdio.h>
void main()
{
	int n,k,a;
	scanf("%d%d",&n,&k);
	int x=10;
	while(x<=k)
	x=x*10;
	a=n*x+k;
	printf("%d",a);
}
