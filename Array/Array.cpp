#include <iostream>
using namespace std;

int main() {
    int ARR1[10], product = 1;
    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> ARR1[i];
        product *= ARR1[i];
    }
    cout << "Array:" << endl;
    for (int i = 0; i < 10; i++) cout << ARR1[i] << " ";
    cout << endl << "Product is: " << product << endl << endl;

    int ARR2[7], neg = 0, pos = 0;
    cout << "Enter 7 numbers:" << endl;
    for (int i = 0; i < 7; i++) {
        cin >> ARR2[i];
        if (ARR2[i] < 0) neg++;
        else pos++;
    }
    cout << "Negativ count: " << neg << "  Posetiv count: " << pos << endl << endl; 

    int ARR3[7] = { 10, 15, 8, 23, 42, 7, 18 }, sum = 0;
    cout << "Long array:" << endl;
    for (int i = 0; i < 7; i++) {
        cout << ARR3[i] << " ";
        if (ARR3[i] % 2 == 0) sum += ARR3[i];
    }
    cout << endl << "Sum of even numbers: " << sum << endl << endl;

    int ARR4[10];
    cout << "Powers of 2:" << endl;
    for (int i = 0; i < 10; i++) {
        ARR4[i] = 1 << i;
        cout << ARR4[i] << " ";
    }
    cout << endl << "Revers order:" << endl;
    for (int i = 9; i >= 0; i--) cout << ARR4[i] << " ";
    cout << endl << endl;

    int ARR5[7] = { -5, 3, -8, 12, -4, 7, -2 };
    cout << "Array before:" << endl;
    for (int i = 0; i < 7; i++) {
        cout << ARR5[i] << " ";
        if (ARR5[i] < 0) ARR5[i] = ARR5[i] * -1; 
    }
    cout << endl << "Array after:" << endl;
    for (int i = 0; i < 7; i++) cout << ARR5[i] << " ";
    cout << endl;
}

