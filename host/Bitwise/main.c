/*
 * main.c
 *
 *  Created on: Jan 10, 2025
 *      Author: arees
 */

#include <stdio.h>
#include <stdint.h>

void waitForUserInput(void);

int main(void) {

	int32_t num;
	printf("Enter a number: ");
	scanf("%d", &num);

	if (num & 1) {
		printf("\nNumber is odd\n");
	}
	else {
		printf("Number is even\n");
	}


	waitForUserInput();

}

void waitForUserInput() {
	printf("Press Enter to exit app\n");
	getchar();
	getchar();
}
