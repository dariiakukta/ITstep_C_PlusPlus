#include <iostream>
using namespace std;

int main() {
    int a, sum = 0;
    cout << "Enter a: ";
    cin >> a;

    do {
        cout << "Enter a valid number: ";
        cin >> a;
    } while (a < 0 || a > 500);

    int sum = 0, i = a;
    while (i <= 500) {
        sum += i;
        i++;
    }
    cout << sum << endl;

    int x, y;
    cout << "Enter x and y: ";
    cin >> x >> y;
    int power = 1, j = 0;
    do {
        power *= x;
        j++;
    } while (j < y);
    cout << power << endl;

    sum = 0;
    i = 1;
    do {
        sum += i;
        i++;
    } while (i <= 1000);
    cout << sum / 1000.0 << endl;

    cout << "Enter a: ";
    cin >> a;
    do {
        cout << "Enter a valid number: ";
        cin >> a;
    } while (a < 1 || a > 20);

    int product = 1;
    i = a;
    while (i <= 20) {
        product *= i;
        i++;
    }
    cout << product << endl;

    int k;
    cout << "Enter k: ";
    cin >> k;
    i = 2;
    do {
        cout << k << " x " << i << " = " << k * i << endl;
        i++;
    } while (i <= 10);

    int count = 0;
    i = 100;
    do {
        int digit1 = i / 100;
        int digit2 = (i / 10) % 10;
        int digit3 = i % 10;
        if (digit1 == digit2 || digit2 == digit3 || digit1 == digit3) {
            count++;
        }
        i++;
    } while (i <= 999);
    cout << count << endl;

    count = 0;
    i = 100;
    do {
        int digit1 = i / 100;
        int digit2 = (i / 10) % 10;
        int digit3 = i % 10;
        if (digit1 != digit2 && digit2 != digit3 && digit1 != digit3) {
            count++;
        }
        i++;
    } while (i <= 999);
    cout << count << endl;

    int num;
    cout << "Enter a number: ";
    cin >> num;
    int result = 0, place = 1;
    do {
        int digit = num % 10;
        if (digit != 3 && digit != 6) {
            result += digit * place;
            place *= 10;
        }
        num /= 10;
    } while (num > 0);
    cout << result << endl;

    int A;
    cout << "Enter A: ";
    cin >> A;
    int B = 1;
    do {
        if (A % (B * B) == 0 && A % (B * B * B) != 0) {
            cout << B << endl;
        }
        B++;
    } while (B <= A);

    cout << "Enter A: ";
    cin >> A;
    int sumOfDigits = 0, temp = A;
    do {
        sumOfDigits += temp % 10;
        temp /= 10;
    } while (temp > 0);
    if (sumOfDigits * sumOfDigits * sumOfDigits == A * A) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    cout << "Enter A: ";
    cin >> A;
    i = 1;
    do {
        if (A % i == 0) {
            cout << i << endl;
    }
        i++;
    } while (i <= A);

    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    i = 1;
    do {
        if (num1 % i == 0 && num2 % i == 0) {
            cout << i << endl;
    }
        i++;
    } while (i <= num1 && i <= num2);
}


