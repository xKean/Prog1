#include "stdio.h"
#include <stdbool.h>

int gewinn(int a, int b, int c) {
	if (a == b && a == c) {
		return 20;
	}
	if (a != b && b!= c && c != a) {
		return 0;
	}

	return 10;
}

bool numbersAreSame(int x, int y) {
	if (x == y) return true;
	return false;
}

int main() {
	int a, b, c;
	printf_s("Bitte drei Ganzzahlen eingeben!\n");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);

	printf_s("\n\n%d\n\n",gewinn(a,b,c)	);

}

