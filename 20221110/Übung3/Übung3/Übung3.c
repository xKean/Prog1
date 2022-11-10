#include <stdio.h>
#include <stdbool.h>



void letzteZiffer() {
	int a, b = 0;
	printf("Bitte geben Sie a und b ein (zahlen).\n");

	scanf_s("%d", &a);
	scanf_s("%d", &b);
	if (a % 10 == b % 10) {
		printf("Letzte Ziffer gleich\n");
	}
}

void zahlenFolge() {
	//2.1
	printf("Aufgabe 2.1: \n");
	for (int i = 100; i <= 200; i++) {
		printf("%d\n", i);
	}
	//2.2
	printf("Aufgabe 2.2: \n");
	for (int i = 111; i <= 222; i++) {
		if (i % 2 == 0) {
			printf("%d\n", i);
		}
	}
	//2.3
	printf("Aufgabe 2.3: \n");
	for (int i = 333; i >= 222; i--) {
		if (i % 3 == 0) {
			printf("%d\n", i);
		}
	}
}

void gleichungsLoesung() {
	for (int x = 1; x <= 100; x++) {
		if ((x*x*x - 73 * x*x + 1655 * x - 11951) == 0) {
			printf("Loesung gefunden: %d \n", x);
		}
	}
}

void zahlenSpiele() {
	printf("Aufgabe 4.1: \n");
	int x = 0;
	for (int i = 1; i <= 1000; i++) {
		if (i % 3 == 0) {
			x += i;
		}
	}
	
	printf("Aufgabe 4.2 + 4.3: \n");
	int n = 0;
	int sevenCount = 0;
	bool containsSeven = false;
	printf("Bitte n eingeben!\n");
	scanf_s("%d", &n);

	while (n) {
		if (n % 10 == 7) {
			containsSeven = true;
			sevenCount++;
		}
		n /= 10;
	}
	if (containsSeven) printf("true\n");
	else printf("false\n");
	printf("Anzahl der 7 in der Eingabe: %d \n", sevenCount);
}

void teiler() {
	printf("Bitte int x eingeben: \n");
	int x, summe = 0;
	scanf_s("%d", &x);
	printf("Alle Teiler von %d sind: ", x);
	for (int i = 1; i <= x; i++) {
		if ((x % i) == 0) {
			printf("\n%d", i);
			summe += i;
		}
	}
	printf("\n Die Summe aller Teiler ist: %d \n", summe);
}

void quersumme() {
	printf("Bitte eine nichtnegative Ganzzahl eingeben: \n");
	int n = 0, summe = 0;
	scanf_s("%d", &n);
	if (n < 0) {
		printf("Falsche Eingabe!");
		return;
	}

	while (n) {
		summe += n % 10;
		n /= 10;
	}
	printf("Die Quersumme ist: %d\n", summe);
}

void iterierteQuersumme() {
	printf("Bitte eine nichtnegative Ganzzahl eingeben: \n");
	int n = 0, summe = 0, temp;
	scanf_s("%d", &n);
	if (n < 0) {
		printf("Falsche Eingabe!");
		return;
	}
	
	do {
		summe = 0;
		while (n) {
			summe += n % 10;
			n /= 10;
		}
		n = summe;
	} while (summe >= 10);

}



void main() {
	printf("Aufgabe 1:\n");
	letzteZiffer();

	printf("Aufgabe 2:\n");
	zahlenFolge();

	printf("Aufgabe 3: \n");
	gleichungsLoesung();

	printf("Aufgabe 4: \n");
	zahlenSpiele();

	printf("Aufgabe 6: \n");
	teiler();

	printf("Aufgabe 7: \n");
	quersumme();

	printf("Aufgabe 8: \n");
	iterierteQuersumme();
}