#include<stdio.h>

//using namespace std;

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
			for(j=0;j<=3;j++)
		      {
			printf("%c",a[r][c][j]);
			
	         }

		}
		printf("\n");
		
	}

 return 0;	
 }   
