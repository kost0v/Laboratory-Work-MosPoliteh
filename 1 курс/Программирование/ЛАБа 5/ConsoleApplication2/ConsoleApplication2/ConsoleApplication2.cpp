#include <iostream>
#include <cstring>
#include <Windows.h>
using namespace std;


void Reversit(char str[]) {
	int size = strlen(str), n = size / 2;
	char buff;
	for (int i = 0; i < n; i++) {
		buff = str[i];
		str[i] = str[size - 1 - i];
		str[size - 1 - i] = buff;
	}
	cout << str;
}


int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
		char str[256];
		cout << "Введите строку которая станет реверсивный: ";
		cin.getline(str, 256);
		Reversit(str);
		return 0;
	}

