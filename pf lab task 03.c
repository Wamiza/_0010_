#include <stdio.h>

 int main()
 {
 	char character;
 	
 	printf("Enter a Character");
 	scanf("%C" ,&character);
 	
 	if (character== 'a' || character== 'e' || character=='i' || character== 'o' || character== 'u' ||
	    character=='A' || character== 'E' || character== 'I' || character== 'O' || character== 'U' ) {
	    printf("%c is a vowel\n" , character);
	}
    else if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')) {
	printf("%c is a consonant\n" , character);
    }
    else if (character >= '0' && character <= '9') {
  	printf("%c is a digit\n" , character);
    }
    else{
    	printf("%c is a special character\n" ,character);
	}
	return 0;
 	
 }