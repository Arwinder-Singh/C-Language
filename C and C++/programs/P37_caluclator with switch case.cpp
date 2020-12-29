#include<stdio.h>

int main()
{
     char op;
	 int a,b;
	
	printf("enter operation ");
	scanf("%c",&op);
	printf("enter first num ");
	scanf("%d",&a);
	printf("enter second num ");
	scanf("%d",&b);
	
	
	 switch(op)
	 {
	 	case '+':
	 	printf("%d ",a+b);
	 	break;
	 	
	 	case '-':
	 	printf("%d ",a-b);
	 	break;
	 	
	 	case '*':
	 	printf("%d ",a*b);
	 	break;
	 	
	 	case '/':
	 	printf("%d ",a/b);
	 	break;
	 	
	 	default:
	 		printf("ki karna tu frr");
	 }
}
