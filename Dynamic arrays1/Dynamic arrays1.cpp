#include <iostream>
#include <conio.h>
using namespace std;

int* add_element(int* arr, int* size, int number) {
    int* temp = new int[(*size) + 1];
    for (int i = 0; i < *size; i++) temp[i] = arr[i];
    temp[*size] = number;
    delete[] arr;
    (*size)++;
    arr = temp;
    return arr;
}

int* delete_last(int* arr, int* size) {
    if (*size == 0) return arr;
    int* temp = new int[(*size) - 1];
    for (int i = 0; i < (*size) - 1; i++) temp[i] = arr[i];
    delete[] arr;
    (*size)--;
    arr = temp;
    return arr;
}

int* delete_first(int* arr, int* size) {
    if (*size == 0) return arr;
    int* temp = new int[(*size) - 1];
    for (int i = 1; i < *size; i++) temp[i - 1] = arr[i];
    delete[] arr;
    (*size)--;
    arr = temp;
    return arr;
}

int* print_array(int* arr, int size) {
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;
    return arr;
}

int main() {
    int size = 5;
    int* arr = new int[size] {10, 20, 30, 40, 50};
    char choice;

    while (true) {
        arr = print_array(arr, size);
        cout << "1. Add\n2. Delete last\n3. Delete first\n0. Exit\n";
        choice = _getch(); 

        if (choice == '1') {
            cout << "Add number? (y/n): ";
            choice = _getch(); 

            if (choice == 'y') {
                int number;
                cout << "\nEnter number: ";
                cin >> number;
                arr = add_element(arr, &size, number);
            }
        }
        else if (choice == '2') {
            arr = delete_last(arr, &size); 
        }
        else if (choice == '3') {
            arr = delete_first(arr, &size);
        }
        else if (choice == '0') {
            delete[] arr;
            return 0;
        }
        else {
            cout << "Invalid number! Try again"; 
        }
    }
}
