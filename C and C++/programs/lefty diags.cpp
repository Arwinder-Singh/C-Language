#include<stdio.h>

int main()
{
  int	a[4][4]={1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4},r,c,g,s=0,d[3];
    
    for(r=0;r<4;r++)
    {
    
    	for(c=0;c<=4;c++)
    	{
            	if(r==c)
				s=s+a[r][c]; 	
        }
         
         
            
	}
 
    
    printf(" sum of left diagonal elements: %d",s);
	
	
return 0;	
}
