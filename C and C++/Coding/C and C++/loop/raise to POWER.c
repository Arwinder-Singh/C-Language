#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<windows.h>

int main()
{   

	int i,p,b;
	i=1;

	  printf("POWER KINE A ! ");
	  scanf("%d",&p);
	  
	  printf("KITHO TAK SERIES ! ");
	  scanf("%d",&b);
	  
	    do
	     { 
	       i=i*p;
	       printf("%d ",i);
		 }
			 while(i<b);
	 
return 0;
system("pause");
}

