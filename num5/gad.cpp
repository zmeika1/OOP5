#include "gad.h"

double* create(double* mas, int size) {
	mas = new double[size];
	return mas;
}

void full(double* mas, int size) {
	for (int i = 0; i < size; i++) {
		mas[i] = rand() % 200 - 100;
	}
}

void print(double* mas, int size) {
	for (int i = 0; i < size; i++) {
		cout << mas[i] << " ";
	}
	cout << endl;
}

void del(double* mas) {
	delete[] mas;
}