#include<stdio.h>

int main()
{
	int arr_marks[10] = {1,2,3,4,5,6,7,8,9,10},i,sum=0;
   
   for(i=0;i<=9;i++)
	{
		sum+=arr_marks[i];
	}
	
	printf("%d",sum);
	
	
	return 0;
}
