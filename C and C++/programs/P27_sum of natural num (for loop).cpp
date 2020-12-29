#include<stdio.h>

int main()
{
	int n,s,i;
	s=0;
	printf("natural num upto");
    scanf("%d",&n);
	
     for(i=0;i<=n;i++)
	{
		s=s+i;
	}
	printf(" sum :%d ",s);
 return 0;	
}
