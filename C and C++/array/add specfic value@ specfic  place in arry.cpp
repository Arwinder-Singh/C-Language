#include<stdio.h>

int main()
{
	int a[4]={2,4,6,8},i,f,b;
	 printf("give value u want to chnage ");
	 scanf("%d",&b);
	 
	 printf("give place at u want to chnage ");
	 scanf("%d",&f);
	     
	    
	
	for(i=0;i<=3;i++)
	{    
	     a[f-1]=b;
		printf("%d ",a[i]);
	}
	
}
