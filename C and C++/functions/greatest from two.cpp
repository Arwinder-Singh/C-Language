#include<stdio.h>

int max(int i,int j);

int main()
{
	int n1,n2,tmp;
	printf("enter two values");
	scanf("%d%d",&n1,&n2);

	tmp=max(n1,n2);
	printf("%d is max ",tmp);

	
return 0;	
}

int max(int i,int j)
{
	int c;
		
	if(i>j)
	 c=i;
		
	else
	 c=j;
	
return c;	
}
