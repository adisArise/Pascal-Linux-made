#include <stdio.h>
#include "pascal.h"
#include "screen.h"

int main(void) {
	int n, k;
	setColors(BLUE, MAGENTA);
	clearScreen();	//Sets entire screen as background color
	for (n = 0; n < ROWS; n++) {
		for (k = 0; k <= ROWS-n; k++) printf("  ");
		for (k = 0; k <= n; k++) {
			printf("%4d", binomial(n, k));
		}
		printf("\n");
	}
	resetScreen();	//Sets colors back after triangle
}