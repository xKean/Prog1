#include "stdio.h"

int ggT(int a, int b) {
	while (a != b) {
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
	int a, b;
	printf_s("Bitte zwei Ganzzahlen fuer GGT eingeben!\n");

	scanf_s("%d", &a);
	scanf_s("%d", &b);

	printf_s("\n\nGGT der Eingaben:\n\n%d\n\n", ggT(a, b));
	printf_s("KGV der Eingaben:\n\n%d\n\n", kgV(a, b));
}

