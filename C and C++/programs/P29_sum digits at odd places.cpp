#include<stdio.h>

int main()
{  
    int num[5],n=12345,x,i,s=0;
    
    i=5;
    while(n>0,i>0)
    { 
         i--;
    	x=n%10;
    	num[i]=x;
		 if(i%2==0)
		 s=s+num[i];
		 	
		 
        n=n/10; 
    	
	}
	printf(" sum of digits at odd places is : %d ",s);
//      for(i=0;n>0,i<5;i++)
//      {
//      	x=n%10;    
//         num[i]=x;
//		 if(i%2==0)
//		 
//		 	s=s+num[i];
//		 
//        n=n/10;  
//	  }
//    printf(" sum of digits at odd places is : %d ",s);
    
	 
	return 0;
}
