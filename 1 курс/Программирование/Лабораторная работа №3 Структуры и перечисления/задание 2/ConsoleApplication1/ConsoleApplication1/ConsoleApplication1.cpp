#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    enum etype { laborer, secretary, manager, accountant, executive, researcher };
    etype a;
    char w;
    cout << " Введите первую букву должности \n"
        "(laborer, secretary, manager, accountant, executive, researcher) : \n";
    cin >> w;
        switch (w)
        {
        case 'l':
            a = laborer;
            cout << "Полное название должности: laborer";
            break;
        case 's':
            a = laborer;
            cout << "Полное название должности: secretary";
            break;
        case 'm':
            a = laborer;
            cout << "Полное название должности: manager";
            break;
        case 'a':
            a = laborer;
            cout << "Полное название должности: accountant";
            break;
        case 'e':
            a = laborer;
            cout << "Полное название должности: executive";
            break;
        case 'r':
            a = laborer;
            cout << "Полное название должности: researcher";
            break;
        }


}
