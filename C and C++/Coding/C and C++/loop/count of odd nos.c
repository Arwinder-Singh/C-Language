#include<stdio.h>

void main()
{
	int a,c;
		
	
	c=0;
	
		while(a<150)
		{
		   a++;                 //  natural nos  
		   if(a%2==1)          // condition for odd no
		   {
		   	printf(" %d",a);
		   	
		   	c=c+1;            // count  
		   	
		   }
    
		}
	  printf("\ncount  %d",c);
}
