/*
 * main.c
 *
 *  Created on: Jan 10, 2025
 *      Author: arees
 */

#include <stdio.h>

int main() {

	float num0, num1, num2;

	printf("Enter first number: ");
	fflush(stdout);
	scanf("%f", &num0);

	printf("\nEnter second number: ");
	fflush(stdout);
	scanf("%f", &num1);

	printf("\nEnter third number: ");
	fflush(stdout);
	scanf("%f", &num2);

	float average = (num0 + num1 + num2) / 3;

	printf("\nAverage is : %f\n", average);

	printf("Press Enter to exit app\n");
	getchar();
	getchar();
}
