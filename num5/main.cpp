#include "gad.h"


int main()
{
	srand(time(0));
	int n;
	cin >> n;
	double* arr = nullptr;
	arr = create(arr, n);
	full(arr, n);
	print(arr, n);
	del(arr);
}
#include "num3.h"

int main()
{
	int str, stl;
	srand(time(0));
	cin >> str >> stl;
	int** arr = new int* [str];
	for (int i = 0; i < str; i++) {
		arr[i] = new int[stl];
	}
	full(arr, str, stl);
	print(arr, str, stl);

	for (int i = 0; i < str; i++) {
		delete[] arr[i];
	}
	delete[] arr;
}
#include "fun.h"

int main()
{
	int n = 12;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		arr[i] = i + 1;
	}
	print(arr, n);
	replace(arr, n);
	print(arr, n);
}