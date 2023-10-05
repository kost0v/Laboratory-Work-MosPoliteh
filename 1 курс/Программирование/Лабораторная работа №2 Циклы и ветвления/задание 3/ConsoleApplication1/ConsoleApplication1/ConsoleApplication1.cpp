#include <iostream>
#include <math.h>

using namespace std; 
int main()
{
	setlocale(LC_ALL, "Russian");
	double vklad;
	int year;
	double  stavka;
	double  s;
	int a_max = 0;
	cout << "Введите начальный вклад: ";
	cin >> vklad;
	cout << "Введите число лет: ";
	cin >> year;
	cout << "Введите процентную ставку: ";
	cin >> stavka;
	float* massiv =new float[year];
	stavka = stavka / 100;
	s = 1 + stavka;

	for (int i = 0; i < year; i++) {
		massiv[i] = vklad * pow(s,i + 1);
		if (massiv[i] > a_max)
			a_max = massiv[i];
		
	}
	cout << "Через " << year << " лет вы получите " << a_max << " Евро" << endl;
	for (int i = 0; i < year; i++) {
		cout << "В конце " << i + 1 << "-го" << " года вы получите " << massiv[i] << " Евро" << endl; //ОНО РАБОТАЕТ ААААААААААААААААа
	}
}
