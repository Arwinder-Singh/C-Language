#include<stdio.h>

int main()
{
	int a[4] = {2,4,5,6},i,c,s;
	c=0,s=0;
	
	   for(i=0;i<=3;i++)
	   {
	   	 if(a[i]%2==0)
	   	 {
	   	    c++;

		 }
	   	 else
	   	 {
	   	 	s++;
		  }
	   }
	   printf(" even :%d",c);
	   printf(" odd  :%d",s);
	   

 return 0;	
}
