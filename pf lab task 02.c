#include <stdio.h>
  
   int main()
   {
   	int operator;
   	float a,b,c,d,e,f;
   		printf("enter a: ");
    	scanf("%f" ,&a);
   		printf("enter b: ");
    	scanf("%f" ,&b);
    	 printf("Enter 1 to add \n");
    	 printf("Enter 2 to subtract \n");
         printf("Enter 3 to multiply \n");
         printf("Enter 4 to divide \n");
         scanf("%d", &operator);
   switch (operator)
   	{
   case 1:
   		c=a+b;
   		printf("%.2f" ,c);
   		break;
   case 2:
   		d=a-b;
   		printf("%.2f" ,d);
   		break;
   case 3:
   		e=a*b;
   		printf("%.2f" ,e);

   		break;
   case 4:
   		f=a/b;
       	printf("%.2f" ,f);
   		break;
   	default:
   		printf("Error");
   
	   }
    return 0;
   }