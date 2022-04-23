#include "fun.h"

void replace(int* mas, int size) {
	for (int i = 1; i < size; i += 2) {
		int save = mas[i - 1];
		mas[i - 1] = mas[i];
		mas[i] = save;
	}
}

void print(int* mas, int size) {
	for (int i = 0; i < size; i++) {
		cout << mas[i] << " ";
	}
	cout << endl;
}