#include <stdio.h>
  
    int main()
   {
     int area;
     float a,b;
     printf("enter a: ");
     scanf("%f" ,&a);
   	printf("enter b: ");
    	scanf("%f" ,&b);
     printf(" Enter 1 to Calculate area of the circle " );
     printf("\n Enter 2 to Calculate area of the rectangle ");
     printf("\n Enter 3 to Calculate area of the triangle ");
     scanf("%d", &area);
   float pi = 3.141;
     switch (area){
	 
     case 1:
            area=2*(pi*a);
            printf("%d" ,area);
            scanf("%d" ,&area);
     case 2:
            area=a*b;
            printf("%d" ,area);
            scanf("%d" ,&area);
     case 3:
          area=(a*b)/2;
            printf("%d" ,area);
            scanf("%d" ,&area);
     }
return 0;
}

