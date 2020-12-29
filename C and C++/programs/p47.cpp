#include<stdio.h>

int main()
{
	 int  nums[10]={7,1,2,3,4,5,6,7,8,9},s=0,c=0,i;
	 
	  	 for(i=0;i<10;i++)	
		   {
		   	 if(nums[i]%2==0)
		   	 c++;
		   	 else
		   	 s++;
		   }
		    
	  printf(" number of odd numbers : %d \n",s);
	  printf(" number of even numbers : %d ",c);
	 
return 0;	
}
