#include<stdio.h>

int main()
{
	char c[5]={'a','b','c','d','e'};
	int i,a;
	  a=0;
	
	 for(i=0;i<=4;i++)
	 {
	 	if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u')
	 	a++;
	 	
	 }
	 printf(" vowels :%d",a);

 return 0;	
}
