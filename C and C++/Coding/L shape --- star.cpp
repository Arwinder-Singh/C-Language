#include<stdio.h>

int main()
{
	int r,c;
	
	  for(r=4;r>=1;r-=1)
	  {
	  	for(c=1;c<=r;c++)
	  	{
	  		printf("* ",c);
		  }
		  
		printf("\n");  
	  }
	  
	return 0;  
}
