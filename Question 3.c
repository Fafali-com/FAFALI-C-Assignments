#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
float  voltage ,current, Power;
printf (" Enter voltage(v):");
scanf("%f", & voltage);
printf(" Enter current (I):");
Power = voltage * current;
	printf ("Power = % .2f Watts/n", Power);
	return 0;
} 