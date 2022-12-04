#include "stdio.h"

float holeWert(char c) {
    float value;
    printf("%c eingeben: ", c);
    scanf_s("%f", &value);
    return value;
}
float berechneSpannung(float r, float i) {
    return r * i; // Spannung U = R * I
}
float berechneStromstaerke(float r, float u) {
    return u / r; // Stromstärke I = U / R
}
float berechneWiderstand(float i, float u) {
    return u / i; // Widerstand R = U / I
}
void zeigeErgebnis(char c, float x) {
    printf("%c betraegt: %f\n\n", c, x);
}

int main() {
    int x = 0;
    while (x == 0) {
        int einheit = 0;
        printf("Was soll berechnet werden? 1 = Spannung, 2 = Stromstaerke oder 3 = Widerstand.\n");
        scanf_s("%d", &einheit);
        switch (einheit) {
            case 1: {
                printf("Berechne Spannung...\n");
                float u, r, i;
                i = holeWert('I');
                r = holeWert('R');
                u = berechneSpannung(r, i);
                zeigeErgebnis('U', u);
                break;
            }
            case 2: {
                printf("Berechne Stromstaerke...\n");
                float u, r, i;
                u = holeWert('U');
                r = holeWert('R');
                i = berechneStromstaerke(r, u);
                zeigeErgebnis('I', i);
                break;
            }
            case 3: {
                printf("Berechne Widerstand...\n");
                float u, r, i;
                u = holeWert('U');
                i = holeWert('I');
                r = berechneWiderstand(i, u);
                zeigeErgebnis('R', r);
                break;
            }
            default: {
                printf("Falsche Eingabe! Das Programm wird beendet!\n");
                x = 1;
                break;
            }
        }
    }
    return 0;
}
