#include<iostream>

using namespace std;

int main()
{
	
	char word[9]={"arwinder"},c=0,i;

	
	
	for(i=0;i<9;i++)
	{
			 if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='o'||word[i]=='A'||word[i]=='E'||word[i]=='I'||word[i]=='O'||word[i]=='U')
		      c++;
	}

printf(" number of vowels : %d ",c);
	
	
	
	
}
