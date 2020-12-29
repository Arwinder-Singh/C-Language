#include<iostream>

using namespace std;

int main()
{
	 int a[2][3][2]={
	                    {{0,1},{2,3},{4,5} },
	                    {{6,7},{8,9},{10,11} }
	                };
	 int  r,c,k;
	
	for(r=0;r<=1;r++)
	{    

	    for(c=0;c<=2;c++)
	    {  

	    	for(k=0;k<=1;k++)
	    	 {
	    		cout<<" "<<a[r][c][k];
	    		
		     }
	     }

    } 
	return 0;
	
}
