#include <stdio.h>
#include <stdlib.h>


int main() {
    int number;

    printf("Enter number: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    for (int i = 1; i <= 12; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}