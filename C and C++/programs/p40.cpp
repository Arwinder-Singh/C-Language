#include<stdio.h>

int main()
{
	 float arr_float[5];
	 int i;
	 
	 printf("enter five decimal vaules upto 3 decimal point \n");
	 for(i=0;i<5;i++)
	  scanf("%f",&arr_float[i]);
	  
	  printf(" values \n");
	  	 for(i=0;i<5;i++)	 
	  printf("%.3f ",arr_float[i]);
	 
return 0;	
}
