#include<stdio.h>

int main()
{
	int n;
	
	
    printf("enter value of limit(N) : ");
	 scanf("%d",&n);
	 

	 n=(n*(n+1)*(2*n+1))/6; 
	 
	 printf("%d ",n);
return 0;	
}
