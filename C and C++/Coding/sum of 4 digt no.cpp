#include<stdio.h>

int main()
{
	int n,s,a,b,c,d,e,f,i;
	
	printf("give'm 4 digit number\n");
	scanf("%d",&n);
	
	 for(i=1;i<=1;i++)
	 {
	 	 if(n<1000||n>9999)
		   {
	 	  	printf("\n FOUR DIGIT NUMBER ONLY");
	 	  	
	 	  	continue;
	 	  	
		   }
	 
	a=n/1000;
	b=n%1000;
	c=b/100;
	d=b%100;
	e=d/10;
	f=d%10;
	
	s=a+c+e+f;
	
	printf("%d ",s);
	
}
	
	return 0;
}
