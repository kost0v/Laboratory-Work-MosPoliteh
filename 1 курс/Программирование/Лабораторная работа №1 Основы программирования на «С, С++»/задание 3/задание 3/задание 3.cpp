#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    string slash = "/";
    int  d11;
    int  d12;
    int  d21;
    int  d22;
    int  d31;
    int  d32;
    cout << "Введите первую дробь \n";
    cin >> d11 >> slash >> d12;
    cout << "Введите вторую дробь \n";
    cin >> d21 >> slash >>  d22;

    if (d12 != d22)
    {
        d31 = d11 * d22 + d12 * d21;
        d32 = d12 * d22;
        cout << d31 << slash << d12 << " сумма двух дробей \n";
    }
    else
    {
        d31 = d11 + d12;
    cout << d31 << slash << d22 << " сумма двух дробей \n";
    }
}
