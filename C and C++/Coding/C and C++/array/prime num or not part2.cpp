#include<iostream>
using namespace std;

int main()
{
	int i,n,c,b,a[5]={13,12,11,6,7};
   c=0;
   
   for(i=0;i<=4;i++)
   {
   	
   	 for(n=1;n<=a[i];n++)
   	 
   	 {
   	 	if(a[i]%n==0)
   	 	 
   	 	 	c=c+1;
   	 	 
	 }
	      b=c;
   	      c=0;
   	      
   	if(b==2)
   	cout<<" "<<a[i]<<" = prime|";
   	
   	else
   	cout<<" "<<a[i]<<" = compo|";
   }
   
return 0;   	
}
