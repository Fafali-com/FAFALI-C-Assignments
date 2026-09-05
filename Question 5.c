#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float r1,r2,r3,largest;
	printf("Enter three resistance values:");
	scanf("%f %f %f", &r1,&r2,&r3);
	largest=r1;
	if (r2 > largest)largest=r2;
	if (r3 > largest)largest=r3;
	printf("largest resistace = %.2f ohms/n", largest);
	return 0;
}