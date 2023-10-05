#include <iostream>
using namespace std;
int counter = 0;
void CallCounter() {
	static int staticCounter = 0;
	counter++;
	staticCounter++;
	cout << "Количество вызовов(глобальная переменная) : " << counter << endl;
	cout << "Количество вызовов(статическая переменная) : " << staticCounter << endl;
	return;
}
int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите количество вызовов функции: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		CallCounter();
	}
}
