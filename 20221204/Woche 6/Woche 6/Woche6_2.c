#include "stdio.h"

int gewinn(int a, int b, int c) {
	if (a == b && a == c) {
		return 20;
	}
	if (a != b && b!= c && c != a) {
		return 0;
	}

	return 10;
}

int main() {
	unsigned int a = 0, b = 0, c = 0;
	printf_s("Bitte drei Gannzzahlen eingeben!\n");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);


	printf_s("\n\n%d\n\n",gewinn(a,b,c)	);

}

