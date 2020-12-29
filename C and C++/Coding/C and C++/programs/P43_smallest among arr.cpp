#include<iostream>

using namespace std;

int main()
{
	
	int arr_rank[4]={3,6,4,7},i,s;
	s=arr_rank[0];
	
	for(i=1;i<=3;i++)
	{
		if(s>arr_rank[i])
		  s=arr_rank[i];
	}
	
	cout<<"smallest num :"<<s;
	
}
