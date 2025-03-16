#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter first side : ";
    cin >> a;

    cout << "Enter second side : ";
    cin >> b;

    cout << "Enter third side : ";
    cin >> c;

    if (a == b && b == c) {
        cout << "This triangle is equilateral " << endl;
    }
    else if (a == b || b == c || c == a) {
        cout << "This triangle is isosceles" << endl;
    }
    else if (c * c == a * a + b * b) {
        cout << "This triangle is right-angle" << endl;
    }
    else {
        cout << "This is simple triangle" << endl;
    }


    int height, width;
    cout << "Enter height of whole : ";
    cin >> height;

    cout << "Enter width of whole : ";
    cin >> width;

    int height1, width1;
    cout << "Enter height of brick : ";
    cin >> height1;

    cout << "Enter width of brick : ";
    cin >> width1;

    (height >= height1 && width >= width1) ? cout << "Yes, it will fit" : cout << "No, it won't fit" << endl;
    cout << endl;

    int a1, b2, c3;

    cout << "Enter first number : ";
    cin >> a1;

    cout << "Enter second number : ";
    cin >> b2;

    cout << "Enter third numer : ";
    cin >> c3;

    ((a1 < 0) + (b2 < 0) + (c3 < 0)) ? cout << "There is a negative number here" : cout << "There is not negative number here" << endl;
    cout << endl;


    int number;
    cout << "Enter the number : ";
    cin >> number;

    (number < -1 || number > 5) ? cout << "The number is outside both segments" : cout << "The number is inside at least one segment" << endl;
    cout << endl;


    int a2, b1, c1;

    cout << "Enter first number : ";
    cin >> a2;

    cout << "Enter second number : ";
    cin >> b1;

    cout << "Enter third numer : ";
    cin >> c1;

    (a2 == b1 == c1) ? cout << "The numbers are equal" : cout << "The numbers are different" << endl;
    cout << endl;

    int A, B, C, D;

    cout << "Enter first side : ";
    cin >> A;

    cout << "Enter second side : ";
    cin >> B;

    cout << "Enter third side : ";
    cin >> C;

    cout << "Enter fourth side : ";
    cin >> D;

    (A == B && B == C && C == D) ? cout << "This is a square" : cout << "This is not a square" << endl;
    cout << endl;


    int age;
    cout << "Enter age of child : ";
    cin >> age;
    (age <= 6) ? cout << "Go to kindergarten" : cout << "You can go to school" << endl;
    cout << endl;

    int num1, num2, num3;

    cout << "Enter first number : ";
    cin >> num1;

    cout << "Enter second number : ";
    cin >> num2;

    cout << "Enter third number : ";
    cin >> num3;

    if ((num1 < 0) + (num2 < 0) + (num3 < 0) == 2)
        cout << "Exactly two numbers are negative" << endl;
    else
        cout << "Condition not met" << endl;


        


}


