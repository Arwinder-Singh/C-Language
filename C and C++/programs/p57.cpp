#include<iostream>
using namespace std;

int main()
{
	
	int a1[3][3]={1,2,3,4,5,6,7,8,9},a2[3][3]={1,2,3,4,5,6,7,8,9},i,j,s[3][3];
	
	for(i=0;i<3;i++)
	   { 
	     for(j=0;j<3;j++)
	     {
	     	s[i][j]=a1[i][j]+a2[i][j];
	        cout<<" "<<s[i][j];
	      }
	      printf("\n");
	   }

	   return 0;
}
