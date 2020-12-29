#include<iostream>

using namespace std;

int main()
{
	
	int arr_height[4]={3,6,4,7},a,i,s;
	a=arr_height[0];
	
	
	for(i=1;i<=3;i++)
	{
		if(a<arr_height[i])
		  a=arr_height[i];
		
	}
	
	cout<<"greatest num :"<<a;
	
}
