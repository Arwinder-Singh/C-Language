#include<stdio.h>
#include<conio.h>

void main()
{
	int no,s,n;
	
	 printf("TYPE A NUMBER :");
     scanf("%d",&no);
    
     s=0;

        while(n<no)
        {  
       	  n++;

       	  s=s+n;

	    }
	      
	      printf("count : %d",s);
	getch();
}
