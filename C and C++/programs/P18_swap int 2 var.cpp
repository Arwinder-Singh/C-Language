#include<stdio.h>

int main()
{ 
int a,b;
     
     printf("type in 1st:");
     scanf("%d",&a);
     printf("type in 2nd:");
     scanf("%d",&b);
    
    a=a+b;
    b=a-b;
    a=a-b;
    
  
    printf(" int 1st :%d\n",a);
    printf(" int 2st :%d",b);
	
 return 0;	
}
