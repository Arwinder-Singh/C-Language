#include<stdio.h>

int main()
{
	 int  arr_marks[10]={0,1,2,3,4,5,6,7,8,9},sum=0,i;
	 
	  	 for(i=0;i<10;i++)	
		   {
		   	 sum+=arr_marks[i];
		   }
		    
	  printf("%d ",sum);
	 
return 0;	
}
