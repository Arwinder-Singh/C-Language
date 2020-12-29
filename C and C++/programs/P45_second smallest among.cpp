#include<iostream>

using namespace std;

int main()
{
	
	int si[4]={3,1,4,7},a,i,s,b;
	a=si[0];
	
	
	for(i=1;i<4;i++)
	{
		if(a>si[i])
		  {
		  	a=si[i];
		  	b=i;
		  }	  
	}
	for(i=b;i<3;i++)
		si[i]=si[i+1];
		
	a=si[0];	
	
	for(i=1;i<3;i++)
	   {
	   	 if(a>si[i])
		  
		  	a=si[i];
	   }

	 printf(" second greatest number is : %d ",a);
	
	
	
	
}
