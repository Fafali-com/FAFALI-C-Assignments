
#include <stdio.h>


int main(int argc, char *argv[]) {
	//Variable declarations with suitable data types
	int age = 20;
	float examScore = 78.50f;
	float gpa = 3.45f;
	char grade = 'B';
	
	// Displaying values using appropriate format specifiers
	printf("Age: %d\n", age);
	printf("Examination Score: %.2f\n", examScore);
	printf("GPA: %.2f\n", gpa);
	printf("Grade: %c\n", grade);
	
	return 0;
}