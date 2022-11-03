#include <stdio.h>
#include <stdbool.h>
int a, b = 5, c, d;


void printVariablen() {
	printf("A: %d B: %d C:%d D:%d \n", a, b, c, d);
}
int main() {
	a = b / 2;
	printVariablen();
	c = b % 2;
	printVariablen();
	d = 1 - (b - 1);
	printVariablen();
	b = b * -3;
	printVariablen();
	d = d % 3;
	printVariablen();
	c = c + b * d + 4;
	printVariablen();
	a = b + d;
	printVariablen();
	a = 0; b = 2; c = 3; d = 4;
	printVariablen();
	a = (b + 2) * 2 * c + 1;
	printVariablen();
	a = b * d * c * (-1);
	printVariablen();

	getchar();
	return 0;
}