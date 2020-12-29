#include<stdio.h>

int main()
{  
   int r,c,s;
   
     s=1;
     
     for(r=5;r>=1;r--)
     { 
          for(c=1;c<=s;c++)
          {
          	printf("  ");
		  }
		  
		 s++; 
         
            for(c=1;c<=r;c++)
            {
          	printf("*",c);
		    }
//		      r=r-1;
		        for(c=r;c>0;c=c-1)
                {
          	        printf("*",c);
		        }
//         r++;
     	
     	printf("\n");
	 }
  
	
	return 0;
}
