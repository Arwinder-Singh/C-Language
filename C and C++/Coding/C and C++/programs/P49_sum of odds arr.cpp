#include<stdio.h>

int main()
{
	int a[8] = {0,2,0,4,0,6,0,8},i,sum=0;
   
   for(i=0;i<8;i++)
	{
		if(i%2!=1)
		sum+=a[i];
	}
	
	printf("%d",sum);
	
	
	return 0;
}
