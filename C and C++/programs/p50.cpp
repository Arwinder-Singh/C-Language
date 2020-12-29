#include<iostream>
using namespace std;

int main()
{ 
  int a[7]={1,2,3,4,5,6,7},i;
	
	 for(i=0;i<=6;i++)
	   {
	   	   if(a[i]%2==0)
	   	   {
	   	   	 a[i]=1;
			}
	       else
	       {
	       	a[i]=0;
		   }
		   
		   cout<<" "<<a[i];
	   }
	 
	
	
	return 0;
}
