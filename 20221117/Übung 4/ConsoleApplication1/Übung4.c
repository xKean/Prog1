#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void maximum() {
	int eingabe = 0, maxEingabe = 0;
	printf("Bitte 10 Zahlen eingeben!\n");
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &eingabe);
		if (eingabe < 0) {
			printf("Es wurde eine negative Zahl eingegeben! Das Programm wird abgebrochen.\n");
			break;
		}
		if (eingabe > maxEingabe) maxEingabe = eingabe;
	}
	if (eingabe >= 0) printf("Die groesste eingegebene Zahl ist: %d\n", maxEingabe);
}

void ausdruecke() {
	/*
		int x = 1, y = 2;
		bool z = true;
		((y++) * 5) + y;  // Das Ergebnis ist: x: 1 y: 3 z: 1 .

		(y * 5 % (++y)); // Das Ergebnis ist: x: 1 y: 3 z: 1 .

		(y++) - (y--); // Das Ergebnis ist: x: 1 y: 2 z: 1 .

		x * 5 < y || z && x > y; // Das Ergebnis ist: x: 1 y: 2 z: 1 . Hier wird nichts berechnet.

		x = y = (y + 1); // Das Ergebnis ist: x: 3 y: 3 z: 1
	*/

	for (int i = 0; i < 5; i++) {
		int x = 1, y = 2;
		bool z = true;

		switch (i) {
			case 0: ((y++) * 5) + y; break;
			case 1: (y * 5 % (++y)); break;
			case 2: (y++) - (y--);; break;
			case 3: x * 5 < y || z && x > y; break;
			case 4:	x = y = (y + 1); break;
			default: printf("Fehler!"); break;
		}
		printf("x: %d y: %d z: %d\n", x, y, z);
		//Hier ist keine weitere Ausgabe gewuenscht gewesen.
	}
}

void fakultaet() {

	// In C kann ein int einen Wertebereich von –2.147.483.648 bis +2.147.483.647 darstellen. 
	// Somit ist die maximale darstellbare Fakultät 12! mit dem Wert 479001600.
	// Im nächsten Schritt (479001600*13 = 6.227.020.800) würde das int overflowen.

	// Ein unsigned int kann einen Wertebereich von 0 bis +4.294.967.295 darstellen. Auch hier ist die maximale darstellbare Fakultät 12!

	// Ein long long kann einen Wertebereich von –9.223.372.036.854.755.808 bis +9.223.372.036.854.755.807 darstellen.
	// Hier ist die maximale darstellbare Fakultät 20! mit +2.432.902.008.176.640.000 im nächsten Schritt (2.432.902.008.176.640.000 * 21) würde auch das long long overflowen.

	printf("Bitte eine natuerliche Zahl eingeben!;\n");
	int eingabe = 0;
	long long ergebnis = 1; // replace type here if needed :) 
	scanf_s("%d", &eingabe);
	if (eingabe == 0) {
		printf("Das Ergebnis von 0! ist 1\n");
	}
	else if (eingabe < 0) {
		printf("Bitte eine natürliche Zahl eingeben!");
	}
	else {
		for (int i = 0; i < eingabe; i++) {
			printf("Rechne %I64u * %d", ergebnis, i + 1);
			ergebnis *= (i + 1);
			printf("= %I64u\n", ergebnis);
		}
	}
}

void calcPi() {
	printf("Leibnitz-Reihe:\n");
	long double zahler = 0, nenner = 0, ergebnis = 0, summe = 0;
	for (int i = 0; i < 1000000; i++) {
		zahler = pow(-1, i);
		nenner = 2 * i + 1;
		ergebnis = zahler / nenner;
		summe += ergebnis;
	}
	summe *= 4;
	printf("Summe: %f\n", summe);

	// ---------------------------------// 

	printf("Wallische Produkt: \n");
	long double pi = 1.0;
	for (int i = 2; i <= 1000000; ++i)
	{
		if (i % 2 == 0)
		{
			pi *= (i / (i - 1.0));
		}
		else
		{
			pi *= ((i - 1.0) / i);
		}
	}
	pi *= 2.0;
	printf("Produkt: %f\n", pi);
}

void gleitKommaZahl() {
	double x = 0.1, y = 0.2;

	if (x + y == 0.3) {
		printf("Wird nicht wahr!\n");
	}

	y = 0.3;
	if (x + y == 0.4) {
		printf("Wahr!\n");
	}

	// Beim prüfen auf (x + y == 0.3) wird der Zustand nicht wahr. Dies kommt durch Rundungsfehler beim Umwandeln und Rechnen zustande.
	// Wenn man das Programm debuggt, sieht man dass x = 0.10000000000000001 , y = 0.20000000000000001 und 0.3 = 0.29999999999999999
	// Addiert man die beiden Zahlen entsteht durch die Rundungsfehler x+y = 0.30000000000000004

	// Beim überprüfen des zweiten Zustands, ist x = 0.10000000000000001 , y = 0.29999999999999999 und 0.3 = 0.40000000000000002
	// Addiert man beide entsteht durch die Rundungsfehler x+y = 0.40000000000000002

	// Durch den verwendeten IEEE754-Standard (Double Precision Standard) ist es durch Rundungen nach dem 52. Bit nicht möglich die Zahlen 
	// genau anzugeben.

	double myDouble = 0.0, doubleOne = 1.0;
	float myFloat = 0.0, floatOne = 1.0;
	bool tenkcheck = false, hunderetkcheck = false;

	printf("Testing float: \n");
	for (int i = 0; i < 1000000; i ++) {
		myFloat += (floatOne / (i + floatOne));

		if (i > 9999 && !tenkcheck) {
			printf("Bei 10.000 Summanden: %.16f\n", myFloat);
			tenkcheck = true;
		}
		if (i > 99999 && !hunderetkcheck) {
			printf("Bei 100.000 Summanden: %.16f\n", myFloat);
			hunderetkcheck = true;
		}
	}
	printf("Bei 1.000.000 Summanden: %.16f\n", myFloat);
	tenkcheck = false, hunderetkcheck = false;
	
	printf("Testing double: \n");
	for (int i = 0; i < 1000000; i ++) {
		myDouble += (doubleOne / (i + doubleOne));

		if (i > 9999 && !tenkcheck) {
			printf("Bei 10.000 Summanden: %.16f\n", myDouble);
			tenkcheck = true;
		}
		if (i > 99999 && !hunderetkcheck) {
			printf("Bei 100.000 Summanden: %.16f\n", myDouble);
			hunderetkcheck = true;
		}
	}
	printf("Bei 1.000.000 Summanden: %.16f\n", myDouble);

	/*
	Testing float:
		Bei 10.000 Summanden: 9.7877130508422852
		Bei 100.000 Summanden: 12.0908603668212891
		Bei 1.000.000 Summanden: 14.3573579788208008
	Testing double:
		Bei 10.000 Summanden: 9.7877060260453472
		Bei 100.000 Summanden: 12.0901561297633364
		Bei 1.000.000 Summanden: 14.3927267228649889

		Es fällt auf, dass der Double-Wert bei weniger Summanden etwas genauer ist.
		Auch bei 100.000 Summanden ist der Double-Wert genauer, sowie bei 1.000.000 Summanden.

		Es fällt außerdem auf, dass bei jedem weiteren Summanden die Genauigkeit bei Float abnimmt.
		Im Gegenzug scheint die Genauigkeit von Double mit jedem weiteren Summanden zuzunehmen:
		Bei 10.000 Summanden liegt die erste Ungenauigkeit bei 10^-4, bei 1.000.000 Summanden hingegen bei 10^-11.
	*/

}





void main() {
	//printf("Aufgabe 1:\n");
	//maximum();

	//printf("Aufgabe 2:\n");
	//ausdruecke();

	//printf("Aufgabe 3:\n");
	//fakultaet();

	//printf("Aufgabe 4:\n");
	//calcPi();

	printf("Aufgabe 5:\n");
	gleitKommaZahl();

}


