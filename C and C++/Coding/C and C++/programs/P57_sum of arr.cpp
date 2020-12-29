#include<stdio.h>

int main()
{
  int	a[3][3]={1,1,1,2,2,2,3,3,3},b[3][3]={1,1,1,2,2,2,3,3,3},d[3][3],r,c;
    
    for(r=0;r<=2;r++)
    {
    
    	for(c=0;c<=2;c++)
    	{
            	d[r][c]=a[r][c]+b[r][c];	
        }
        
	}
	for(r=0;r<=2;r++)
    	{
    		for(c=0;c<=2;c++)
            	{
            		printf(" %d ",d[r][c]);
				}
			printf("\n");	
		}
		


return 0;	
}
