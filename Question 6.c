#include <stdio.h>
#include <stdlib.h>

void displayGrade(float score) {
	if (score < 0 || score > 100) {
		printf("Invalid score! Score must be between 0 and 100.\n");
	} else if (score >=80) {
		printf("Grade: A\n");
	} else if (score >= 70) {
		printf("Grade: B\n");
	} else if (score >=60) {
		printf("Grade: C\n");
	} else if (score >=50) {
		printf("Grade: D\n");
	}else {
		printf("Grade: F\n");
	}
}


int main() {
	float score;
	printf("Enter examination score: ");
	scanf("%f", &score);
	
	displayGrade(score);
	
	return 0;
}