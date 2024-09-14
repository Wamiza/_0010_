#include <stdio.h>

int main ()
{
	float Customer_Id,Bill,Unit, Surcharge;
	printf("Enter your Customer ID: ");
	scanf("%f",&Customer_Id);
	printf("Enter your Name: James\n ");
	printf("Enter Units:\n ");
	scanf("%f",&Unit);
	
	if (Unit<=199){
		Bill=Unit*16.2;
	}
	else if (Unit>=200 && Unit<300){
		Bill=Unit*20.10;
	}
	else if (Unit>= 300 && Unit<500){
		Bill=Unit*27.10;
	}
	else{
		Bill=Unit*35.90;
	}
	printf("Your bill is: %.2f\n",Bill);
	if (Bill>18000){
		Surcharge=Bill*0.15;
		
		printf("You will be charged a Surcharge of 15%%: %.2f\n", Bill);
		printf("Total bill after Surcharge: %.2f\n",Surcharge);
	}
	return 0;
}