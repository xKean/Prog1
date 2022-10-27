#include <stdio.h>
#include <stdbool.h>
int main() {
	int A, U, a = 3, b = 5;

	A = a * b;
	U = 2 * (a + b);

	printf("Umfang: %d \nFlaecheninhalt: %d \n", U, A);

	getchar();
	return 0;
}
