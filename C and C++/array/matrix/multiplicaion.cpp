#include<iostream>

using namespace std;

int main()
{
	int gta[2][2]={
	               {1,2},
	               {4,5}
				   };
	int rdr[2][2]={
	               {5,6},
	               {7,8}
				  };
	int i,j,k,cod[2][2];
	
	
	
	  for (i=0;i<2;i++) 
	  {
        for (j=0;j<2;j++) 
		{
            cod[i][j] = 0;
            for (k=0;k<2;k++)
            
                cod[i][j] = cod[i][j] + gta[i][k] * rdr[k][j];
                
                
        }
    }

    for (i = 0; i < 2; i++) 
	{
        for (j = 0; j < 2; j++)
            printf("%d ", cod[i][j]);
        printf("\n");
    }
	  
}
