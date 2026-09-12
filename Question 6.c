#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	float voltage, current, time;
	float power, energy;
	
	//Accept user inputs
	printf("Enter voltage: ");
	scanf("%f", &voltage);
	
	printf("Enter current: "),
	scanf("%f, &current");
	
	printf("Enter time in hours: ");
	scanf("%f", &time);
	
	//Perform calculations
	power= voltage * current;
	energy= power* time;
	
	//Display formatted results
	printf("Power: %.2f W\n", power);
	printf("Energy: %.2f Wh\n", energy);
	return 0;
}