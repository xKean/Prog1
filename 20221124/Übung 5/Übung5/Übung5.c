#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

void minimum() {
	int eingabe = 0, minEingabe = INT_MAX;
	printf("Bitte 10 Zahlen eingeben!\n");
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &eingabe);
		if (eingabe <= 0) {
			i--;
			continue;
		}
		if (eingabe < minEingabe) minEingabe = eingabe;
	}
	if (eingabe >= 0) printf("Die kleinste eingegebene Zahl ist: %d\n", minEingabe);
}


void maximum() {
	FILE* inputFile = NULL, *outputFile = NULL;
	errno_t err;
	char inputDataName[] = "werte.txt";
	
	err = fopen_s(&inputFile, inputDataName, "r");

	if (err == 0)
	{
		printf("Datei geöffnet!\n");
	}
	else
	{
		printf("Error! Es gab einen Fehler beim öffnen von Datei %s\n", inputDataName);
	}
	

	

	

}

void main() {
	//printf("Aufgabe 1: \n");
	//minimum();

	printf("Aufgabe 2: \n");
	maximum();
}