#include<stdio.h>

int main()
{
  int	a[3][3]={1,1,1,0,2,2,0,3,3},r,c,g,s=0,d[3];
    
    for(r=0;r<=2;r++)
    {
    
    	for(c=0;c<=2;c++)
    	{
            	s=s+a[c][r]; 	
        }
         d[r]=s;
         s=0;
            
	}
 
    for(g=0;g<=2;g++)
    printf("%d ",d[g]);
	
	
return 0;	
}
