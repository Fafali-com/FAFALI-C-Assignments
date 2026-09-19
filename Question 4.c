#include <stdio.h>
#include <stdlib.h>

//Function declaratiom
void checkEvenOdd(int number);


int main() {
	int num;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	//Call function and pass user input
	checkEvenOdd(num);
	
	return 0;
}
	
	//Function definition
	void checkEvenOdd(int number) {
		if (number % 2 == 0){
			printf("%d is an even munber.\n", number);
		}else {
			printf("%d is an odd number. \n", number);
		}
	}
