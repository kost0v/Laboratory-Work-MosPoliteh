#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double n;
    double a;
    cout << "Введите температуру, измеренную в градусах по Цельсию \n";
    cin >> n;
    a = n * ((float)9 / 5) + 32;
    cout << a << "  Температура в градусах по Фарегнейту \n";

}