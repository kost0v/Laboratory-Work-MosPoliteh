#include <iostream>
using namespace std;

struct fraction {
    int chislitel;
    int znamenatel;
};



 int main()
 {
     fraction d1, d2, d3;
     setlocale(LC_ALL, "Russian");
     char s = '/';
        
     cout << "Введите первую дробь: ";
     cin >> d1.chislitel >> s >> d1.znamenatel;
     cout << "Введите вторую дробь: ";
     cin >> d2.chislitel >> s >> d2.znamenatel;

     if (d1.znamenatel != d2.znamenatel) {
         d3.znamenatel = d1.znamenatel * d2.znamenatel;
         d3.chislitel = d1.chislitel * d2.znamenatel + d2.chislitel * d1.znamenatel;
         cout << "Сумма дробей: ";
         cout << d3.chislitel << s << d3.znamenatel;

     }
     else {
         d3.chislitel = d1.chislitel + d2.chislitel;
         d3.znamenatel = d1.znamenatel;
         cout << "Сумма дробей: ";
         cout << d3.chislitel << s << d3.znamenatel;
     }

 }