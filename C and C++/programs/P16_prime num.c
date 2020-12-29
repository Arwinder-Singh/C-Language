#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,n;
	
n=12001154;
	
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
		printf("compo");
		exit(i);
		}
	}
	printf("prime");	
	
}


