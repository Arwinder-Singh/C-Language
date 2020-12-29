#include<stdio.h>

int main()
{
	int n,s,a,b,c,d,e,f;
	
	a=n/1000;
	b=n%1000;
	c=b/100;
	d=b%100;
	e=d/10;
	f=d%10;
	
	s=a+c+e+f;
	printf("%d",s);
	
	return 0;
}
