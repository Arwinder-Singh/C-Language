#include<stdio.h>

int main()
{
   int r,c,d;
      d=65;
   
       for(r=65;r<=68;r++)
	   {
	   	  for(c=65;c<=r;c++)
	   	  { 
	   	    printf("%c ",d);
	   	    
	   	    d++;
		  }
	   	  
	   	  printf("\n");
		 }  
   
   return 0; 
	
}
