#include<stdio.h>
void main()
{
	int x,c=0;
	scanf("%d",&x);
	while(x!=0)
	{
		x=x/10;
		c++;
	}
printf("%d",c);
}
