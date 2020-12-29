#include<stdio.h>

int main()
{
	int i,n;
	float sum,x;
	sum =0;
	
    printf("enter value of limit(N) : ");
	 scanf("%d",&n);
	 
	 for(i=1;i<=n;i++)
	 {
	 	sum+=1.0/i;
	 }
	 printf("%f ",sum);
return 0;	
}
