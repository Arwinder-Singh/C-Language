 #include<iostream>
using namespace std;

int  main()
{ 
  int a[4]={5,3,22,25},i;
	
	 for(i=0;i<=3;i++)
	   {
	   	 if(a[0]>a[1])
	   	 {
	   	 	if(a[0]>a[2])
	   	 	{
	   	 	 if(a[0]>a[3])
			  {
			  	cout<<a[0] <<" is greatest";
	             
				 i=4;		  
 			  }
			}
		 }
		 
		 if(a[1]>a[0])
	   	 {
	   	 	if(a[1]>a[2])
	   	 	{
	   	 	 if(a[1]>a[3])
			  {
			  		cout<<a[1] <<" is greatest";
	             
				 i=4;
			  	
			  	 
 			  }
			}
		 }
		 
		   
		 if(a[2]>a[0])
	   	 {
	   	 	if(a[2]>a[1])
	   	 	{
	   	 	 if(a[2]>a[3])
			  {
			  	cout<<a[2] <<" is greatest";
	             
				 i=4;
 			  }
			}
	    }
		 
		 if(a[3]>a[0])
	   	 {
	   	 	if(a[3]>a[1])
	   	 	{
	   	 	 if(a[3]>a[2])
			  {
			  	cout<<a[3] <<" is greatest";
	             
				 i=4;
 			  }
			}
		 }
	   }
	 
	
	
	return 0;
}
