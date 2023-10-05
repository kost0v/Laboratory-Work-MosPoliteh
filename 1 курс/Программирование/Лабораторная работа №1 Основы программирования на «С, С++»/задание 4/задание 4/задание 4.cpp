#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    string funt = "£";
    int  f_old;
    int  sh_old;
    int  p_old;
    int  p_now;
    float f_now;
    cout << "Введите количество фунтов: ";
    cin >> f_old;
    cout << "Введите количество шиллингов: ";
    cin >> sh_old;
    cout << "Введите количество пенсов: ";
    cin >> p_old;
    
    p_now = sh_old * 12 + p_old;
    f_now = f_old + (ceil(((float)p_now / 240)*100))/100;
    cout << "Десятичных фунтов: "<<funt<<f_now;
}