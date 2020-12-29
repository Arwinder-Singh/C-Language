#include<stdio.h>

int fac(int n);

int main()
{ 
  int res,a;
  
  printf("enter value of limit(N) : ");
	 scanf("%d",&a);
	 
  float sum=0,x,i;
  
      for(i=1;i<=a;i++)
       {
          sum+=i/fac(i);
		  	
       }
 printf(" sum of series : %f ",sum);
 
  
}

int fac(int n)
{
  int i,m=1;
  
   for(i=n;i>0;i=i-1)
    	 m=m*i;

 return m;	
}
