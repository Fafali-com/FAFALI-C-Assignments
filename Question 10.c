#include <stdio.h>
#include <stdlib.h>


int main() {
    int total_students;
    int passes = 0;
    int failures = 0;

    printf("How many students? ");
    if (scanf("%d", &total_students) != 1 || total_students <= 0) {
        printf("Invalid number of students.\n");
        return 1;
    }

    for (int i = 1; i <= total_students; i++) {
        float score;

        while (1) {
            printf("Student %d score: ", i);
            if (scanf("%f", &score) == 1 && score >= 0 && score <= 100) {
                break;
            }
            printf("Invalid score. Please enter a value between 0 and 100.\n");
            
            // Clear input buffer in case of non-numeric input
            while (getchar() != '\n');
        }

        if (score >= 50) {
            printf("PASS\n");
            passes++;
        } else {
            printf("FAIL\n");
            failures++;
        }
    }

    printf("Passed: %d\n", passes);
    printf("Failed: %d\n", failures);

    return 0;
}