#include<stdio.h>

int main()
{
	int gta[3][3]={5,2,3,4,0,6,7,8,0};
	 int r,c,s;
	  s=0;
	  
	  for(r=0;r<=2;r++)
	    
	    	for(c=0;c<=2;c++)
	    	{
	    		if(r==c)
	    			s=s+gta[r][c];
			}
			
		printf("sum of dags :%d",s);
   
  
return 0;		
}
