#include<stdio.h>

int main()
{
	char a[3][2][4]=
	                 {
	                 	{"1","99"},
	                 	{"2","98"},
	                 	{"3","100"}
					 };
   int r,c,j;
   	
	for(r=0;r<=2;r++)
	{
		for(c=0;c<=1;c++)
		{	
		  printf("%s ",a[r][c]);
		}
		
		printf("\n");
		
	}

 return 0;	
 }   
