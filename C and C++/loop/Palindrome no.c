#include<stdio.h>

void main()
{
int n,m,s=0,x;

  printf("TYPE A NUMBER :");
  scanf("%d",&n);
  
  m=n; // store original intput of n

    while(n>0)
    { 
        x=n%10;    // breakdown of no
        s=s*10+x;  // reverse of no 
        n=n/10;    // for running of loop again 
      
       
    } printf("");
    
    (s==m)?printf("\nNUMBER IS PALINDROME"):printf("\nNUMBER IS NOT PALINDROME");
	     
		 getch();                                                      
}

  
 
 
 

