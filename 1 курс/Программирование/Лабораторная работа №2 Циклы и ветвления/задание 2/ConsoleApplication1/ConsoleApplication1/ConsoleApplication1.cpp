#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int d;
	int a = 0;
	int b;
	cout << "Введите число для расчёта факториала" << endl;
	cin >> d;
	b = a;
	for (; d != 0;) {
		a = d;
		for (b = a - 1; b != 0; b--) {
			a = a * b;
		}
		cout << a << endl;
		cin >> d;
	}

}
