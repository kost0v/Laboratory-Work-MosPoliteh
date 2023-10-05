#include <iostream>
using namespace std;

struct employee
{
    int number;
    float money;

} m1, m2, m3;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите номер сотрудника: ";
    cin >> m1.number;
    cout << "Введите величину его зарплаты в рублях: ";
    cin >> m1.money;
    cout << "Введите номер сотрудника: ";
    cin >> m2.number;
    cout << "Введите величину его зарплаты в рублях: ";
    cin >> m2.money;
    cout << "Введите номер сотрудника: ";
    cin >> m3.number;
    cout << "Введите величину его зарплаты в рублях: ";
    cin >> m3.money;
    cout << "Номер: " << m1.number << " Зарплата: " << m1.money << endl;
    cout << "Номер: " << m2.number << " Зарплата: " << m2.money << endl;
    cout << "Номер: " << m3.number << " Зарплата: " << m3.money << endl;
}

