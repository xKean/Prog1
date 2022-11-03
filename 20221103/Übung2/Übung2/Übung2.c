#include <stdio.h>
#include <stdbool.h>


void geometrie() {
	int A, U, a=0, b = 0;

	printf("Bitte geben Sie a und b ein (zahlen).\n");
	printf("Eingabe a: \n");
	scanf_s("%d", &a);
	printf("Eingabe b: \n");
	scanf_s("%d", &b);

	A = a * b;
	U = 2 * (a + b);

	printf("Umfang: %d \nFlaecheninhalt: %d \n", U, A);

	getchar();
}


void alter() {
	int alter;
	printf("Bitte Alter eingeben! \n");
	scanf_s("%d", &alter);

	if (alter >= 60) printf("Oldtimer\n");
	else printf("Jungspund\n");

}

void maexchen() {
	int eingabe1 = 0, eingabe2 = 0;
	printf("Bitte zwei Zahlen von 1-6 eingeben! Bitte zuerst die kleinere Zahl eingeben! \n");
	scanf_s("%d %d", &eingabe1, &eingabe2);

	if (eingabe2 > eingabe2) {
		printf("Falsche Eingabe!\n");
		return;
	}

	if (eingabe1 == eingabe2) printf("Pasch %d \n", eingabe1);
	else if (eingabe1 == 1 && eingabe2 == 2) printf("Maexchen\n");
	else {
		printf("%d%d \n", eingabe2, eingabe1);
	}
	return;
}

void restDerDivision() {
	int n = 0;
	printf("Bitte ganze Zahl n eingeben!\n");
	scanf_s("%d", &n);

	int rest = 57 % n;

	if (n == 57) printf("Scherzkeks\n");
	else printf("%d \n",rest);

	return;
}

void schokoriegel() {
	int a = 0, b = 0, c = 0, n =0;

	printf("Bitte kleine Schokoriegel (1kg) eingeben!\n");
	scanf_s("%d", &a);
	printf("Bitte grosse Schokoriegel (5kg) eingeben! \n");
	scanf_s("%d", &b);
	printf("Bitte n eingeben! \n");
	scanf_s("%d", &n);


	if (b * 5 + a < n) {
		// Nicht genug Schokoriegel
		printf("-1");
		return;
	};


	for (b; b > 0; b--) {
		if (n < 5) {
			break;
		}
		else {
			n -= 5;
		};
	};

	if (a < n) {
		printf("-1");
		return;
	}
	printf("%d",n);
	return;
}

void main()
{
	printf("Erste Aufgabe: \n");
	geometrie();
	printf("Zweite Aufgabe: \n");
	alter();
	printf("Dritte Aufgabe: \n");
	maexchen();
	printf("Vierte Aufgabe: \n");
	restDerDivision();
	printf("Fuenfte Aufgabe: \n");
	schokoriegel();

	return 0;
}
