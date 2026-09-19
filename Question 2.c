#include <stdio.h>
#include <stdlib.h>

//Function declaration
int add(int a, int b);

int main() {
	int num1, num2, sum;
	
	printf("Enter first number: ");
	scanf("%d", &num1);
	
	printf("Enter second number: ");
	scanf("%d", &num2);
	
	//pass numbers to the function
	sum = add (num1, num2);
	
	printf("sun = %d\n", sum);
	
	return 0;
}
//Function definition
int add(int a, int b){
	return a + b;

}