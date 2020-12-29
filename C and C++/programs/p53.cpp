#include<stdio.h>

int main()
{
  int	a[3][3]={1,1,1,2,2,2,3,3,3},r,c,g,s=0,d[3];
    
    for(r=0;r<=2;r++)
    {
    
    	for(c=0;c<=2;c++)
    	{
            	s=s+a[r][c]; 	
        }
         d[r]=s;
         s=0;
            
	}
 
    for(g=0;g<=2;g++)
    printf(" sum of row %d : %d\n",g+1,d[g]);
	
	
return 0;	
}
