#include <iostream>
#include <ctime>
using namespace std;

void rect(int w, int h, char s = '#') {
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cout << s;
		}
		cout << endl;
	}
}

int leap(int year) {
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		return 1;
	else
		return 0;
}

int fact(int nummm) {
	if (nummm <= 1)
		return 1;
	else
		return nummm * fact(nummm - 1);
}

void fill(int arrr[], int n, int min, int max) {
	for (int i = 0; i < n; i++) {
		arrr[i] = rand() % (max - min + 1) + min;
	}
}

double avg(int a[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += a[i];
	}
	return (double)sum / size;
}

void reverse(int a[], int n) {
	for (int i = 0; i < n / 2; i++) {
		int t = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = t;
	}
}

int main() {
	srand(time(0));

	rect(5, 3);
	cout << endl;
	rect(4, 2, '*');
	cout << endl;

	cout << leap(2024) << endl;
	cout << fact(5) << endl;

	const int n = 10;
	int arr[n];
	fill(arr, n, 1, 50);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << avg(arr, n) << endl;

	reverse(arr, n);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}