#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,n;
	
	printf("type any number.\n");
	scanf("%d",&n);
	
	
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
		printf("compo");
		exit(1);
		}
	}
	printf("prime");	
	
}


