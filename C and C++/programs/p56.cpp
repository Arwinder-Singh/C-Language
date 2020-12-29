#include<stdio.h>

int main()
{
  int	a[3][3]={1,2,3,4,5,6,7,8,9},r,c,g,s=0,d[3];
    
    for(r=0;r<4;r++)
    {
    
    	for(c=0;c<=4;c++)
    	{
            	if(r==c&&r+c==2)
				a[r][c]=0; 	
				
				if(r==c||r+c==2)
				s=s+a[r][c];
        }
         
	}
 
    
    printf(" sum of corner elements: %d",s);
	
	
return 0;	
}
