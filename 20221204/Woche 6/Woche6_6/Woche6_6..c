#include "stdio.h"
#include <stdbool.h>

bool mauern(int klein, int gross, int ziel) {
	return (klein + gross * 5 >= ziel) ? true : false;
}

int main() {
	int anzKlein = 0, anzGross = 0, anzBenoetigt = 0;
	printf_s("Bitte die Anzahl kleiner Steine eingeben!\n");
	scanf_s("%d", &anzKlein);
	printf_s("Bitte die Anzahl grosser Steine eingeben!\n");
	scanf_s("%d", &anzGross);
	printf_s("Bitte die Zielentfernung eingeben!\n");
	scanf_s("%d", &anzBenoetigt);

	if (anzKlein < 0 || anzGross < 0) {
		printf_s("Man kann keine Steine abreissen! :b\n");
		printf_s("Das Programm wird abgebrochen.");
		return 0;
	}

	printf_s(mauern(anzKlein, anzGross, anzBenoetigt) ? "\n\ntrue\n\n" : "\n\nfalse\n\n");
}

