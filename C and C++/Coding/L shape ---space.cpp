#include<iostream>

using namespace std;

int main()
{
	int r,c,s=5;
	
	  for(r=1;r<=5;r++)
	  {  
	     
	  	 for(c=1;c<=s;c++)
	  	 {
	  	 	printf(" ");
		   }
	  	s=s-1;
	  	
	  	 for(c=1;c<=r;c++)
	  	 {
	  	 	printf("*");
		   }
		   
		printf("\n");   
	  }
	
	return 0;
}
