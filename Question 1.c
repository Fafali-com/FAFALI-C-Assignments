#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float celsius,fahrenheit;
	printf("Enter temperature in celsius:");
	scanf("%f",  &celsius);
	fahrenheit = (celsius*9.0/5.0+32);
	printf("%.2f c = %.2f f/n", celsius,fahrenheit);
	
	
	return 0;
}