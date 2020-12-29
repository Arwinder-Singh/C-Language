#include<iostream>
using namespace std;

int main()
{ 
  int a[7]={0,1,0,1,0,0,1},i;
	
	 for(i=0;i<=6;i++)
	   {
	   	   if(a[i]==1)
	   	   {
	   	   	 a[i]=0;
			}
	       else
	       {
	       	a[i]=1;
		   }
		   
		   cout<<" "<<a[i];
	   }
	 
	
	
	return 0;
}
