#include <stdio.h>
#include <stdlib.h>

//Function declarations
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(float a, float b);

int main() {
	float num1, num2;
	
	printf("Enter first number: ");
	scanf("%f", &num1);
	
	printf("Enter second number: ");
	scanf("%f", &num2);
	
	printf("\nAddition = %d\n", add((int)num1, (int)num2));
	printf("Subtraction =%d\n", subtract((int)num1,(int)num2 ));
	printf("Multiplication =%d\n", multiply((int)num1, (int)num2));
	
	//Division with zero check
	if (num2 ==0){
		printf("Division = Error: Division by zero is not allowed.\n");
	} else{
		printf("Division = %.2f\n", divide(num1,num2));
	}
	
	return 0;
}
	//Funtion definitions
	int add(int a, int b){
		return a + b;
	}
	int subtract(int a, int b){
		return a - b;
	}
	int multiply(int a, int b){
		return a * b;
	}
	float divide(float a, float b){
		return a / b;
	}
	
	
