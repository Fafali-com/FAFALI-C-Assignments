#include <stdio.h>
#include <stdlib.h>


int main() {
    float score;

    printf("Enter examination score: ");
    if (scanf("%f", &score) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    if (score < 0 || score > 100) {
        printf("Invalid score\n");
    } else if (score >= 50) {
        printf("Result: PASS\n");
    } else {
        printf("Result: FAIL\n");
    }

    return 0;
}