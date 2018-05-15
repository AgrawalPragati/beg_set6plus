#include<stdio.h>
void main()
{
	int n,rem,a[10],i=0,count=0;
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		a[i]=rem;
		n=n/10;
		count++;
		i++;		
	}
	for(i=count-1;i>=0;i--)
	printf("%d ",a[i]);
}
