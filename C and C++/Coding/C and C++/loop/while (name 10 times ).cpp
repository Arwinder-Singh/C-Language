#include<iostream>
#include<conio.h>
#include<windoes.h >
using namespace std;

int main()
{
	char name[50];
	
	  cout<<"what's ur name yo! \n";
	  cin>>name;
	  
	    int n;
	  
	      while(n<10)
	       {
	     	 n++;
	     	 cout<<"\n"<<n<<": "<<name;
		       }
		    
	std::cin.ignore();
	return 0;
	
}

