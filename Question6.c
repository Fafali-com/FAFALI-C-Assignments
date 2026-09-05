#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float sensor[5],sum=0, avg;
	int i;
	printf("Enter 5 sensor values:/n");
	for(i = 0; i < 5; i++) {
		printf("value %d: ",i+1);
		scanf("%f" , &sensor[i]);
		sum += sensor[i];
	}
	avg = sum/5;
	printf("Average = %.2f/n", avg);
	return 0;
}