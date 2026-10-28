#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Low, const int High) {
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}

void Print(int* a, const int size) {
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}

void ReverseArray( int* a, const int size) {
	for (int i = 0; i < size / 2; i++) {
		int temp = a[i];
		a[i] = a[size - 1 - i];
		a[size - 1 - i] = temp;
	}
}
int main() {
	srand((unsigned)time(NULL));

	const int size = 9;
	int a[size];

	int Low = -20;
	int High = 20;

	Create(a, size, Low, High);
	cout << "Original array: ";
	Print(a, size);
	cout << endl;

	cout << endl;
	ReverseArray(a, size);
	cout << "Reversed array: ";
	Print(a, size);

	return 0;
}