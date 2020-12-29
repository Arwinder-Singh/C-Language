#include<stdio.h>
#include<stdlib.h>

int main()
{

	int i,n;
	
	n=11;                 
	
	  for(i=2;i<=n;i++)
	  {  
	  	if(n%i==0)
        {
        	
         	break;
         	
		}
		
		 if(n==i)
		 {
		 	printf(" %d ",i);
		 	printf("| prime |");
		 }
        
		else
		{
			printf(" %d ",i);
			printf("| not prime |",i);
//	        system("cls");        	 
		}

	  }
	
return 0;	
	
}
