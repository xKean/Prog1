#include "stdio.h"
#include <stdbool.h>

bool mauern(int klein, int gross, int ziel) {
	return (klein + gross * 5 >= ziel) ? true : false;
}

int main() {
	int anzKlein, anzGross, anzBenoetigt;
	printf_s("Bitte die Anzahl kleiner Steine eingeben!\n");
	scanf_s("%d", &anzKlein);
	printf_s("Bitte die Anzahl grosser Steine eingeben!\n");
	scanf_s("%d", &anzGross);
	printf_s("Bitte die Zielentfernung eingeben!\n");
	scanf_s("%d", &anzBenoetigt);

	printf_s(mauern(anzKlein, anzGross, anzBenoetigt) ? "\n\ntrue\n\n" : "\n\nfalse\n\n");
}

