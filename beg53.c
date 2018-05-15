#include<stdio.h>
void main()
{
	int n,sum=0,rem=0,i;
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
		i++;		
	}
	printf("%d",sum);
	
}
