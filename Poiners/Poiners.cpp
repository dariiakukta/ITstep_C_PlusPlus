#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cout << "Enter 3 numbers: ";
    cin >> x >> y >> z;

    int* px = &x, * py = &y, * pz = &z;

    int product = (*px) * (*py) * (*pz);
    cout << "dobutok: " << product << endl;

    float average = (*px + *py + *pz) / 3.0;
    cout << "avg num: " << average << endl;

    int min = *px;
    if (*py < min) min = *py;
    if (*pz < min) min = *pz;
    cout << "min num: " << min << endl;

    const int size = 5;
    int arr[size];
    int* pArr = arr;

    for (int i = 0; i < size; i++) {
        *(pArr + i) = rand() % 100;
    }

    cout << "true order: ";
    for (int i = 0; i < size; i++) {
        cout << *(pArr + i) << " ";
    }
    cout << endl;

    cout << "changed order: ";
    for (int i = size - 1; i >= 0; i--) {
        cout << *(pArr + i) << " ";
    }
    cout << endl;

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(pArr + i);
    }
    cout << "suma: " << sum << endl;

    int arr2[size] = { 12, 5, 8, 21, 3 };
    int* pArr2 = arr2;

    int* max = pArr2, * min2 = pArr2;
    for (int i = 1; i < size; i++) {
        if (*(pArr2 + i) > *max) max = pArr2 + i;
        if (*(pArr2 + i) < *min2) min2 = pArr2 + i;
    }

    int temp = *max;
    *max = *min2;
    *min2 = temp;

    cout << "swap1: ";
    for (int i = 0; i < size; i++) {
        cout << *(pArr2 + i) << " ";
    }
    cout << endl;

    const int size2 = 6;
    int arr3[size2] = { 1, 2, 3, 4, 5, 6 };
    int* pArr3 = arr3;

    for (int i = 0; i < size2 - 1; i += 2) {
        int temp2 = *(pArr3 + i);
        *(pArr3 + i) = *(pArr3 + i + 1);
        *(pArr3 + i + 1) = temp2;
    }
    cout << "swap2: ";
    for (int i = 0; i < size2; i++) {
        cout << *(pArr3 + i) << " ";
    }
    cout << endl;

}
