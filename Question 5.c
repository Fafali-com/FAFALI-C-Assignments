#include <stdio.h>
#include <stdlib.h>

//Function declaration
void checkEligibility(int age);


int main() {
	int age;
	
	printf("Enter your age: ");
	scanf("%d", &age);
	
	//Pass age to funtion
	checkEligibility(age);
	
	return 0;
}

//Funtion definition
void checkEligibility(int age){
	if (age >= 18){
		printf("You are eligible to vote.\n");
	}else {
		printf("You are not eligible to vote.\n");
	}
}