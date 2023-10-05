#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    string funt = "£";
    float f_now;
    float f_now_dr;
    int f_now_n_dr;
    int  sh_old;
    float sh_now_and_dr;
    float sh_now_dr;
    int sh_now_n_dr;
    int  p_old;
    float p_now;
    cout << "Введите число десятичных фунтов: ";
    cin >> f_now;
    f_now_n_dr = static_cast<int>(f_now);
    f_now_dr = f_now - f_now_n_dr;
    sh_now_and_dr = f_now_dr * 20;
    sh_old = trunc(sh_now_and_dr);
    sh_now_n_dr = static_cast<int>(sh_now_and_dr);
    sh_now_dr = sh_now_and_dr - sh_now_n_dr;
    p_old = trunc(sh_now_dr * 12);

    cout << "Эквивалентная сумма в старой форме запи: " << funt << f_now_n_dr << "." << sh_old << "." << p_old;
}