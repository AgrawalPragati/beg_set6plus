#include<stdio.h>
void main()
{
	int n,k,i,c=0;
	scanf("%d%d",&n,&k);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
		   c=1;
		}
		else
		{
			c=0;
		}
		
	}
	if(c==1)
	printf("yes");
	else
	printf("no");	
}
