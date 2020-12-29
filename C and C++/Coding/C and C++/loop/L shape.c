#include<stdio.h>

void main()
{
	int r,c,a;
	
	a=1;
	
	  for(r=1;r<=4;r++)
	  {
	  	 for(c=1;c<=r;c++)
	  	    { 
			  printf("%d ",a);
			   a++;
			}
	  	
	  	 printf("\n");
	  }
	
	
}
