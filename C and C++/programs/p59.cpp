#include<stdio.h>

int main()
{
	char name[6][14]={"first name: ","Arwinder","middle name: ","Singh","last name: ","Dhillon"};
	 int i;
		for(i=0;i<6;i++)
		{
			if(i%2==0)
			printf("\n");
			printf("%s ",name[i]);
		}
	 
return 0;	
}
