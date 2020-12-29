#include<stdio.h>

int main()
{  
   int r,c,s;
   
     s=5;
     
     for(r=1;r<=5;r++)
     { 
          for(c=1;c<=s;c++)
          {
          	printf("  ");
		  }
		  
		 s=s-1; 
         
            for(c=1;c<=r;c++)
            {
          	printf("%d ",c);
		    }
		      r=r-1;
		        for(c=r;c>0;c=c-1)
                {
          	        printf("%d ",c);
		        }
         r++;
     	
     	printf("\n");
	 }
  
	
	return 0;
}
