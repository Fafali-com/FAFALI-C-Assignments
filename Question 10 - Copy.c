#include <stdio.h>
#include <stdlib.h>

//Function Prototypes
float calculateTotal(float a, float b, float c);
float calculateAverage(float total);
void displayGrade(float average);
void displayStatus(float average);


int main() {
	float c_score, math_score, elec_score;
	float total, average;
	
	//Prompt user for examination scores
	printf("Enter C Programming score: ");
	scanf("%f", &c_score);
	
	printf("Enter Mathematics score: ");
	scanf("%f", &math_score);
	
	printf("Enter Electronics score: ");
	scanf("%f", &elec_score);
	
	//Calculate total and average using required functions
	total = calculateTotal(c_score, math_score, elec_score);
	average = calculateAverage(total);
	
	//Display Student Result Summary
	printf("\n--------STUDENT RESULT --------\n\n");
	printf("C Programming: %.2f\n", c_score);
	printf("Mathematics: %.2f\n", math_score);
	printf("Electronics: %.2f\n", elec_score);
	
	printf("Total Score: %.2f\n", total);
	printf("Average Score: %.2f\n", average);
	
	//Display Grade and Pass/Fail Status using required functions
	displayGrade (average);
	displayStatus(average);
	
	
	return 0;
}


//Function to calculate the average score
float calculateTotal(float a, float b, float c) {
	return a + b + c;
}


//Function to calculate thr average score
float calculateAverage(float total) {
	return total / 3.0;
}

//Function to determine and display the letter grade based on average
void displayGrade(float average){
	if (average >= 80.0) {
		printf("Grade: A\n");
	} else if (average >= 70.0){
		printf("Grade: B\n");
	} else if (average >= 60.0) {
		printf("Grade: C\n");
	} else if (average >= 50.0) {
		printf ("Grade: D\n");
	} else {
		printf("Grade: F\n");
	}
}

// Function to determine and display the pass/fail status
void displayStatus(float average) { 
if (average >= 50.0){
	printf("Status: PASS\n");
} else {
	printf("Status: FAIL\n");
}
}





