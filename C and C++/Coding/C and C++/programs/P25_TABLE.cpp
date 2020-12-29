#include<stdio.h>

int main()
{ 
   int n,i,m;
   
   printf("kida table bai");
   scanf("%d",&n);
   
   i=0;
   while(i<=9)
      {
      	i++;
    
      	m=n*i;
      printf(" %d x",n);
      printf(" %d =",i);
      printf(" %d\n",m);
	  }
   
   
	
 return 0;	
}
