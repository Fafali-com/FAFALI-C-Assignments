#include <stdio.h>
#include <stdlib.h>


int main() {
    float score;

    printf("Enter score: ");
    if (scanf("%f", &score) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    if (score < 0 || score > 100) {
        printf("Invalid score range\n");
    } else {
        char grade;
        if (score >= 80) {
            grade = 'A';
        } else if (score >= 70) {
            grade = 'B';
        } else if (score >= 60) {
            grade = 'C';
        } else if (score >= 50) {
            grade = 'D';
        } else {
            grade = 'F';
        }

        printf("Score: %.0f\n", score);
        printf("Grade: %c\n", grade);
    }

    return 0;
}