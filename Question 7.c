#include <stdio.h>
#include <stdlib.h>

float calculateAverage(float score1, float score2, float score3) {
	return (score1 + score2 + score3) / 3.0f;
}



int main() {
	float score1, score2, score3;
	
	printf("Enter first score: ");
	scanf("%f", &score1);
	printf("Enter second score: ");
	scanf("%f", &score2);
	printf("Enter third score: ");
	scanf("%f", &score3);
	
	float average = calculateAverage(score1, score2, score3);
	printf("\nAverage Score = %.2f\n", average);
	
	
	return 0;
}