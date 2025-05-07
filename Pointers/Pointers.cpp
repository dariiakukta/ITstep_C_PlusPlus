#include <iostream>
using namespace std;

void biggerNum(int* a, int* b) {
    if (*a > *b) {
        cout << "bIg: " << *a << endl;
    }
    else {
        cout << "big: " << *b << endl;
    }
}

void sign(int* x) 
{
    if (*x > 0)
        cout << "positive" << endl;
    else if (*x < 0)
        cout << "negative" << endl;
    else
        cout << "zero" << endl;
}

void swapNums(int* a, int* b) 

{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void calc(double* a, double* b, char op) {
    double result{};
    if (op == '+')
        result = *a + *b;
    else if (op == '-')
        result = *a - *b;
    else if (op == '*')
        result = *a * *b;
    else if (op == '/') {
        if (*b != 0) result = *a / *b;
        else {
            cout << "error!" << endl;
            return;
        }
    }
    cout << "result: " << result << endl;
}

int sumArr(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}

int main()
{
    int a, b;
    cout << "enter 2 numbers: ";
    cin >> a >> b;
    biggerNum(&a, &b);

    int x;
    cout << "enter a number: ";
    cin >> x;
    sign(&x);

    int c, d;
    cout << "enter 2 numbers to swap: ";
    cin >> c >> d;
    swapNums(&c, &d);
    cout << "after swap: c = " << c << ", d = " << d << endl;

    double n1, n2;
    char op;
    cout << "enter 2 numbers and operator (+ - * /): ";
    cin >> n1 >> n2 >> op;
    calc(&n1, &n2, op);

  
    const int size = 5;
    int arr[size];
    cout << "enter 5 numbers for sum: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int sum = sumArr(arr, size);
    cout << "sum = " << sum << endl;
}
