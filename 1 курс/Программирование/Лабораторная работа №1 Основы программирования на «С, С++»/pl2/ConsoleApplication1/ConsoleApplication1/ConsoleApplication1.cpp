

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    char slash;
    int  d1_c;
    int  d1_z;
    int  d2_c;
    int  d2_z;
    int  d3_c;
    int  d3_z;
    d1_z = 0;
    d2_z = 1;
    cout << "Введите  первую дробь  \n";
    cin >> d1_c >> slash >> d1_z;
    cout << "Введите  вторую дробь  \n";
    cin >> d2_c >> slash >> d2_z;
    if (d1_z != d2_z)
    {
        d3_c = d2_z * d1_c + d2_c * d1_z;
        d3_z = d2_z * d1_z;
        cout << d3_c << slash << d3_z << " сумма \n" << endl;
        
    }
    else
    {
        d3_c = d1_c + d2_c;
        d3_z = d1_z;
        cout << d3_c << slash << d3_z << " сумма \n" << endl;
        
    }
}