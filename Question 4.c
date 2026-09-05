#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float voltage; 
	printf("Enter battery voltage:");
	scanf("%f", & voltage);
	if (voltage <11.0){
		printf("LOW/n");
	}else if (voltage>=11.0 && voltage <= 12.6){
		printf("NORMAL/n");
	}else {
		printf("FULL/n");
	}
	return 0;
}