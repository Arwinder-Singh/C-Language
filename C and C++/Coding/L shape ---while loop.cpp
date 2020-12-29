#include<stdio.h>

int main()
{
	int loop,count,space;
	
	loop=1;
	
	space=5;
	while( loop<=4)
	 {	 
	    
        count=1;
		while(count<=space)
		{
			printf("  ",count);
			count++;
			}	
	   
	   space=space-1;
	   
	 	count=1;
	 	while(count<=loop)
	 	{
	 		printf("%d ",count);
            count++;
		 }
		 
		printf("\n",loop);
		loop++;
	 }
	 
	 
	
  return 0;	
}
