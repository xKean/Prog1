#include "stdio.h"

int rundeSumme(int a, int b, int c){
	return runde10(a)+ runde10(b)+ runde10(c);
}

int runde10(int n) {
	if (n < 0) { // Wenn N kleiner 0
		if (n % 10 >= -4) {
			return n - (n % 10);
		}
		else {
			return n - (10 + (n % 10));
		}
	}
	else { // Wenn N gr??er 0
		if (n % 10 > 4) {
			return n - n % 10 + 10;
		}
		else {
			return n - n % 10;
		}
	}
	
}

int main() {
	int a = 0, b = 0, c = 0;
	printf_s("Bitte drei Ganzzahlen zum auf 10er runden eingeben!\n");

	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);

	printf_s("Summe der gerundeten Eingaben:\n\n%d\n\n", rundeSumme(a, b, c));
}
