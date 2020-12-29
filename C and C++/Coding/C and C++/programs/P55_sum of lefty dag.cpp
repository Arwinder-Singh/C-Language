#include<stdio.h>

int main()
{
	int gta[4][4]={5,2,3,7,4,0,6,5,7,8,0,8,1,2,3,0};
	 int r,c,s;
	  s=0;
	  
	  for(r=0;r<=3;r++)
	    
	    	for(c=0;c<=3;c++)
	    	{
	    		if(r==c)
	    			s=s+gta[r][c];
			}
			
		printf("sum of dags :%d",s);
   
  
return 0;		
}
