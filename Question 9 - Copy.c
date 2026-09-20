#include <stdio.h>
#include <stdlib.h>

int findLargest(int a, int b, int c){
	if (a >= b &&a >=c) {
		return a;
	} else if (b >= a && b >= c){
		return b;
	} else {
		return c;
	}
}

int main() {
	int a, b, c;
	
	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);
	printf("Enter third number: ");
	scanf("%d", &c);
	
	int largest = findLargest(a, b, c);
	printf("\nLargest Number = %d\n", largest);
	
	return 0;
}