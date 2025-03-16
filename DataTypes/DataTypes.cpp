#include <iostream>
using namespace std;

int main()
{
	int diagonal;
	cout << "Enter diagonal = ";
	cin >> diagonal;
	const float duim = 2.54;
	cout << "Diagonal = " << diagonal * duim << endl;


	int eaten_food;
	cout << "Enter eaten food (grams) = ";
	cin >> eaten_food;
	const float days = 30;
	float korm = eaten_food * days / 1000;
	cout << "Nesecary food (kg) = " << korm << endl;

	int a;
	cout << "Enter a = ";
	cin >> a;
	int b;
	cout << "Enter b =  ";
	cin >> b;
	int c;
	cout << "Enter c =  ";
	cin >> c;

	cout << "Suma = " << a + b +  c << endl;

	int num1;
	cout << "Enter num1 = ";
	cin >> num1;
	int num2;
	cout << "Enter num2 =  ";
	cin >> num2;

	float avarage = (num1 + num2) / 2;
	cout << "avarage number = " << avarage << endl;


	int km;
	cout << "Enter kilometers = ";
	cin >> km;

	const float meter = 1000;
	cout << "Meters = " << km * meter << endl;


	int banana;
	cout << "Enter amount of bananas = ";
	cin >> banana;
	int kiwi;
	cout << "Enter amount of kiwis =  ";
	cin >> kiwi;
	int mango;
	cout << "Enter amount of mangos =  ";
	cin >> mango;
	int apple;
	cout << "Enter amount of apples =  ";
	cin >> apple;

	const float prise_of_banana = 15;
	const float prise_of_kiwi = 30;
	const float prise_of_mangos = 100;
	const float prise_of_apples = 5;

	float suma = (prise_of_banana * banana) + (prise_of_kiwi * kiwi) + (prise_of_mangos * mango) + (prise_of_apples * apple);
	cout << "Prise of puchase = " << suma << endl;


	int number;
	cout << "Enter number = ";
	cin >> number;

	float squared = number * number;
	cout << "Squared number = " << squared << endl;

	int day;
	cout << "Enter amount of days = ";
	cin >> day;

	const float hours = day * 24;
	const float minutes = hours * 60;

	cout << "Days in minutes = " << minutes << endl;




}


