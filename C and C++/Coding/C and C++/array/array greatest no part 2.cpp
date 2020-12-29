#include<iostream>

using namespace std;

int main()
{
	
	int si[4]={3,6,4,7},a,i,s;
	a=si[0];
	s=si[0];
	
	for(i=1;i<=3;i++)
	{
		if(a<si[i])
		  a=si[i];
		
		if(s>si[i])
		  s=si[i];
	}
	
	cout<<"greatest num :"<<a<<"\nsmallest num :"<<s;
	
}
