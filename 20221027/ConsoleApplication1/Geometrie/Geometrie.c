#include <stdio.h>
#include <stdbool.h>
int main() {
	int summe = 0;
	for (int i = 1; i < 15; i++) {
		summe = summe + 1;
	}
	printf("%d", summe);

	getchar();
	return 0;
}
