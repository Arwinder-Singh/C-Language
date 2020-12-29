#include<stdio.h>

int main()
{
	int a,b,c,t;
	printf("type in 1st:");
     scanf("%d",&a);
     printf("type in 2nd:");
     scanf("%d",&b);
     printf("type in 3rd:");
     scanf("%d",&c);
     
     t=a;
     if(b>a&&b>c)
     t=b;
     else if(c>a&&c>b)
     t=c;
     
    printf("greatest num :%d",t);
	 
	
 return 0;	
}
