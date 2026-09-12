#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	int age;
	int studentID;
	float examScore;
	
	//Prompt and receieve inputs from the user
	printf("Enter your age: 21");
	scanf("%d", &age);
	
	printf("Enter your studentID: 1054");
	scanf("%d", &studentID);
	
	printf("Enter your examination score: 76.5");
	scanf("%f", &examScore);
	
	//Display formatted summary output 
	printf("Age: %d Student ID: %d Score: %.2f\n", age, studentID, examScore);
	
	return 0;
}