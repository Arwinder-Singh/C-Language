#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n;
	
	n=71;
	for(i=2;i<=n/2;i++){
		if(n%i==0){
		printf("compo");
		exit (2);
		}
	}
	printf("prime");

	
return 0;	
	
}
