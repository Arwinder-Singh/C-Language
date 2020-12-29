#include<stdio.h>

int main()
{ 
   int n,i,m;
   m=1;
   n=6;
   
   for(i=n;i>0;i=i-1)
    {
    	 m=m*i;
	}
   printf("factorial is %d",m);
	
 return 0;
}
