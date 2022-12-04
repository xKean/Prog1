#include "stdio.h"

int ggT(int a, int b) {
	if (a == 0 || b == 0) {
		return a + b;
	}
	while (a != b && a >0) {
		while (a > b) {
			a -= b;
		}
		while (a < b) {
			b -= a;
		}
	}
	return a;
}

int kgV(int a, int b) {
	return a * b / ggT(a, b);
}

int main() {
	int a = 0, b = 0;
	printf_s("Bitte zwei Ganzzahlen fuer GGT eingeben!\n");

	scanf_s("%d", &a);
	scanf_s("%d", &b);

	if (a < 0) {
		a = a * -1;
	}
	if (b < 0) {
		b = b * -1;
	}
	if (a == 0 && b == 0) {
		printf_s("Undefined!");
		return;
	}

	printf_s("\n\nGGT der Eingaben:\n\n%d\n\n", ggT(a, b));
	printf_s("KGV der Eingaben:\n\n%d\n\n", kgV(a, b));
}

