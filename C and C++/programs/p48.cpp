#include<stdio.h>

int main()
{
	 int  nums[10]={7,1,2,3,4,5,6,7,8,9},sum=0,c=0,i;
	 
	  	 for(i=0;i<10;i++)	
		   {
		   	 if(nums[i]%2==0)
		   	    sum+=nums[i];
		 
		   }
		    
	  printf(" sum of even numbers : %d \n",sum);
	  
	 
return 0;	
}
