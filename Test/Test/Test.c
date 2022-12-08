#include "stdio.h"
#include <stdbool.h>
#include <limits.h>

int main() {
	int N = 3, f[N * (N + 1) / 2], n = seriesUp(f, N);
	for (int i = 0; i < n; i++) printf("%d%c ", f[i], i < n - 1 ? ',' : ' ');
}

int max(int feld[], int n) {
	int temp = INT_MIN;
	int maxIndex = 0;
	for (int i = 0; i < n; i++) {
		if (feld[i] > temp) {
			temp = feld[i];
			maxIndex = i;
		}
	}
	return maxIndex;
}

int kleinsteDurchVier(int arr[], int n) {
	int kleinste = INT_MAX;
	bool atLestOne = false;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 4 == 0 && kleinste > arr[i]) {
			kleinste = arr[i];
			atLestOne = true;
		}
	}
	if (atLestOne)return kleinste;
	else return 0;
}	

int luckySum(int a, int b, int c) {
	if (a == 13) {
		a = 0;
		b = 0;
		c = 0;
	}
	if (b == 13) {
		b = 0;
		c = 0;
	}
	if (c == 13) {
		c = 0;
	}

	return a + b + c;
}