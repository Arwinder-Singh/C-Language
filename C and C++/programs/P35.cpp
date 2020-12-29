#include<stdio.h>

int main()
{
int n,m,s=0,x;

  printf("TYPE A NUMBER :");
  scanf("%d",&n);
  
  m=n; // store original intput of n

    while(n>0)
    { 
        x=n%10;    // breakdown of no
        s=s+x*x*x;  // reverse of no 
//        printf("%d ",s);
        n=n/10;    // for running of loop again 
    } 
  (s==m)?printf("\nNUMBER IS ARMSTRONG"):printf("\nNUMBER IS NOT ARMSTRONG");
    	    
		 return 0;                                                   
}

  
 
 
 

