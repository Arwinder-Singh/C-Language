#include<stdio.h>

int main()
{
	int a[5]={16,23,36,11,41},i,n,s,count,b;
	
	count=0;
	
	for(i=0;i<=4;i++)
	{  
	    n=0;
	    
		  while(n<a[i])
		 { 
		    n++;
			 s=a[i]%n;
		
		    	
		  if(s==0)
		  {  
		     count=count+1;	 
		  }
		    
		  	
		  }
		    b=count;
		  count=0;
		  
		  if(b==2)
		  { 
		  	 printf("\n %d is prime",a[i]);
		  	 
			}
		  	 
		  	
		  else
		  {
		  		 printf(" \n %d is compo",a[i]);
		  }
		  
		  
		
	 }
 return 0;	
}

