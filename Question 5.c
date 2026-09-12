#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	float num1, num2;
	
	//Prompt user for input 
	printf("Enter first number: ");
	scanf("%f" , &num1);
	
	printf("Enter second number: ");
	scanf("%f", &num2);
	
	//Calculate and display arithmetic operations
	printf("Addition: %.2f\n", num1 + num2);
	printf("Substraction: %.2f\n", num1 - num2);
	printf("Multiplication: %.2f\n", num1*num2);
	printf("Division: %.2f\n", num1/num2);
	
	return 0;
}