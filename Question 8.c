#include <stdio.h>
#include <stdlib.h>

void multiplicationTable(int number) {
	for (int i =1; i <=12; i++) {
		printf("%d * %d = %d\n", number, i, number *i);
	}
}

int main() {
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	printf("\n");
	
	multiplicationTable(num);
	
	return 0;
}