#include <iostream>
using namespace std;

template <typename T>
void QuickSort(T arr[], int left, int right)
{
	int i = left, j = right;
	int pivot = arr[(left + right) / 2];

	while (i <= j)
	{
		while (arr[i] < pivot) i++;
		while (arr[j] > pivot) j--;
		if (i <= j)
		{
			T temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}
	}

	if (left < j) QuickSort(arr, left, j);
	if (i < right) QuickSort(arr, i, right);
}

int Power(int base, int exp)
{
	if (exp == 0) return 1;
	return base * Power(base, exp - 1);
}

int BinarySearch(int arr[], int left, int right, int key)
{
	if (left > right) return -1;
	int mid = (left + right) / 2;

	if (arr[mid] == key) return mid;
	else if (arr[mid] > key)
		return BinarySearch(arr, left, mid - 1, key);
	else
		return BinarySearch(arr, mid + 1, right, key);
}

int main()
{
	const int SIZE = 10;
	int arr[SIZE] = { 12, 5, 7, 1, 19, 3, 8, 2, 6, 4 };

	cout << "Array:" << endl;
	for (int i = 0; i < SIZE; ++i)
		cout << arr[i] << " ";
	cout << endl;

	int start, end;
	cout << "Enter sorting range (start end): ";
	cin >> start >> end;

	QuickSort(arr, start, end);

	cout << "Sorted array:" << endl;
	for (int i = 0; i < SIZE; ++i)
		cout << arr[i] << " ";
	cout << endl;

	int base, exp;
	cout << "enter base and exponent: ";
	cin >> base >> exp;
	cout << "Power reslt: " << Power(base, exp) << endl;

	int key;
	cout << "Enter value to search: ";
	cin >> key;

	QuickSort(arr, 0, SIZE - 1);

	cout << "Binary search result: " << BinarySearch(arr, 0, SIZE - 1, key) << endl;
}
