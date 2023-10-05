#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	unsigned long long x;
	long double stoimost;
	long double start_pay;
	int year;
	long double  stavka;
	cout << "Введите стоимость квартиры: ";
	cin >> stoimost;
	cout << "Введите число лет ипотеки: ";
	cin >> year;
	cout << "Введите процентную ставку (в %): ";
	cin >> stavka;
	cout << "Введите начальный взнос: ";
	cin >> start_pay;
	stavka = stavka / 100;            
	stoimost = stoimost - start_pay;

	for (int i = 0; i < year; i++) {
		x = stoimost * (stavka + (stavka / (pow(1 + stavka, i + 1) - 1)));

	}
	cout << "Выплата в год: " << x <<  endl;
	cout << "общая сумма выплат: " << x * year << endl;
}
