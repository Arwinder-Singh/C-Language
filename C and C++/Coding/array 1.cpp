#include<iostream>
using namespace std;

int main()
{ 
  int a[5]={7,13,22,49,59},i;
	
	 for(i=0;i<=4;i++)
	   {
	   	   if(i==0)
	   	   {
	   	   	continue;
			  }
	   	cout<<a[i]<<" ";
	   }
	 
	
	
	return 0;
}
