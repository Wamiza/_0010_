#include <stdio.h>

int main()
{
	int cost, discount ;
	
	printf("Enter the value");
	scanf("%d" ,&cost);
	 
	if(cost >= 500 && cost < 2000) {
	printf("The Discount is %d", discount=(cost/100)*5);
  }
	
    if(cost >= 2000 && cost < 4000) {
    printf("The Discount is %d", discount=(cost/100)*10);
  }  
	
	if(cost >= 4000 && cost < 6000) {
    printf("The Discount is %d",discount=(cost/100)*20);
  }
    
    if(cost > 6000 && cost > 6000){
  printf("The Discount is %d",discount=(cost/100)*35);
  }
    int saved_amount;
    printf("\nPrice :%d" ,cost);
    printf("\nAfter Discount :%d", saved_amount=cost-discount);
    printf("\nSaved Amount :%d", discount);
    
    if(cost>=500) {
    	printf("\nValid Discount");
 }
 else {
 	printf("\nPurchase must be Greater than 500");
   	}
	return 0;
}