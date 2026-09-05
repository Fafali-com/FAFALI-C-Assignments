#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	return 0;
	float voltage,safe_limit =5.0;//5v safe limit, you can change 
	printf("Enter measured voltage:");
	scanf("%f",&voltage);
	if(voltage > safe_limit){
		printf("WARNING: voltage%.2Fv is above safe limit%.2Fv/n", voltage, safe_limit);
	}else{
		printf("Voltage%.2Fv is within safe limit/n", voltage);
	}
	return 0;
}