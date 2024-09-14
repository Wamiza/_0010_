#include <stdio.h>

    int main() 
    {
        int Temperature;
    	int C,F,K;
    	printf("enter temperature in celsius: ");
    	scanf("%d" ,&C);
   		printf("enter temperature in fahrenheit: ");
    	scanf("%d" ,&F);
    	printf("enter temperature in kelvin: ");
    	scanf("%d" ,&K);
    	printf("Enter 1 to convert Celsius into Fahrenheit \n");
    	printf("Enter 2 to convert Kelvin into Fahrenheit \n" );
    	printf("Enter 3 to convert Fahrenheit into Kelvin \n");
    	printf("Enter 4 to convert Celsius into Kelvin \n");
    	printf("Enter 5 to convert Kelvin into Celsius \n");
    	printf("Enter 6 to convert Fahrenheit into Celsius \n");
    	scanf("%d", &Temperature);
    	int std=273;
    switch (Temperature)
     {
     	case 1:
     		  Temperature=(C*9/5)+32;
       	      printf("%d" ,Temperature);
              break;
        case 2:
		      Temperature=(K-std)*9/5+32;
			  printf("%d" ,Temperature);
			  break;
		case 3:
		      Temperature=(F-32)*5/9+std;
			  printf("%d" ,Temperature);
			  break; 
		case 4:
       	      Temperature=C+std;
              printf("%d" ,Temperature);
              break;
        case 5:
		      Temperature=K-std;
			  printf("%d" ,Temperature);
			  break;
		case 6:
		      Temperature=(F-32)*5/9;
			  printf("%d" ,Temperature);
			  break; 
	 }
	 printf("\nThanks For Using AI-Powered Temperature");
	return 0;      
	} 