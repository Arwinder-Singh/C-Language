#include<iostream>
using namespace std;

int main()
{
	
	int a1[5]={1,3,5,7,9},a2[5]={2,4,6,8,10},i,s[5];
	
	for(i=0;i<=4;i++)
	   {
	   	s[i]=a1[i]+a2[i];
	   cout<<" "<<s[i];
	   }

	   return 0;
}
