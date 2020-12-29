#include<stdio.h>


int main()
{
	
	int si[4]={3,1,4,7},a,i,s,b;
	a=si[0];
	
	
	for(i=1;i<4;i++)
	{
		if(a>si[i])
		  
		  	a=si[i];
		  
	}

	 printf("smallest number is : %d ",a);
	
	
	
	
}
