#include <iostream>
using namespace std;

int main() {
    int a, sum = 0;
    cout << "Enter a: ";
    cin >> a;
    for (int i = a; i <= 500; i++) {
        sum += i;
    }
    cout << sum << endl;

    int x, y, result = 1;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    for (int i = 0; i < y; i++) {
        result *= x;
    }
    cout << result << endl;

    sum = 0;
    for (int i = 1; i <= 1000; i++) {
        sum += i;
    }
    cout << sum / 1000 << endl;

    int product = 1;
    cout << "Enter a: ";
    cin >> a;
    for (int i = a; i <= 20; i++) {
        product *= i;
    }
    cout << product << endl;

    int k;
    cout << "Enter k: ";
    cin >> k;
    for (int i = 2; i <= 10; i++) {
        cout << k << " x " << i << " = " << k * i << endl;
    }

    int countSame = 0;
    for (int i = 100; i <= 999; i++) {
        int d1 = i / 100, d2 = (i / 10) % 10, d3 = i % 10;
        if (d1 == d2 || d1 == d3 || d2 == d3) {
            countSame++;
        }
    }
    cout << countSame << endl;

    int countDifferent = 0;
    for (int i = 100; i <= 999; i++) {
        int d1 = i / 100, d2 = (i / 10) % 10, d3 = i % 10;
        if (d1 != d2 && d1 != d3 && d2 != d3) {
            countDifferent++;
        }
    }
    cout << countDifferent << endl;

    int num, newNum = 0, place = 1;
    cout << "Enter number: ";
    cin >> num;
    while (num > 0) {
        int digit = num % 10;
        if (digit != 3 && digit != 6) {
            newNum += digit * place;
            place *= 10;
        }
        num /= 10;
    }
    cout << newNum << endl;

    cout << "Enter A: ";
    cin >> a;
    for (int b = 1; b * b <= a; b++) {
        if (a % (b * b) == 0 && a % (b * b * b) != 0) {
            cout << b << " ";
        }
    }
    cout << endl;

    cout << "Enter A: ";
    cin >> a;
    int sumDigits = 0, temp = a;
    while (temp > 0) {
        sumDigits += temp % 10;
        temp /= 10;
    }
    if (sumDigits * sumDigits * sumDigits == a * a) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }

    cout << "Enter number: ";
    cin >> num;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    int num2;
    cout << "Enter two numbers: ";
    cin >> num >> num2;
    for (int i = 1; i <= min(num, num2); i++) {
        if (num % i == 0 && num2 % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

