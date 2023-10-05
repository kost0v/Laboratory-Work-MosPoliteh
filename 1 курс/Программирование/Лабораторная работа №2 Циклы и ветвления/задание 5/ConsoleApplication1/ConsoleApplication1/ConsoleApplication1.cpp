#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    char point = '.';
    char proverka;
    int  f_1;
    int  sh_1;
    int  p_1;
    int  f_2;
    int  sh_2;
    int  p_2;
    int  f_3;
    int  sh_3;
    int  p_3;
    int  sh_3_2;
    int  p_3_2;
    do {
        cout << "Введите первую сумму: ";
        cin >> f_1 >> point >> sh_1 >> point >> p_1;
        cout << "Введите вторую сумму: ";
        cin >> f_2 >> point >> sh_2 >> point >> p_2;
        p_3_2 = p_1 + p_2;
        p_3 = p_3_2 % 12;
        sh_3_2 = sh_1 + sh_2 + p_3_2 / 12;
        sh_3 = sh_3_2 % 20;
        f_3 = f_1 + f_2 + sh_3_2 / 20;
        cout << "Всего " << f_3 << point << sh_3 << point << p_3 << endl;
        cout << "Продолжить (у/n)?  ";
        cin >> proverka;
    } while (proverka == 'y');
}
