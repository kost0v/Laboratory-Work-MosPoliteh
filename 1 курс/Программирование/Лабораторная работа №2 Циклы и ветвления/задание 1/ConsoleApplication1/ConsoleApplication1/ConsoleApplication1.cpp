#include <iostream>
using namespace std;
int main()
{
    int i;
    int p;
    int p2;
    int i2;
    int a;
    char probel;
    char x;
    p2 = 21;
    i2 = 2;
    x = 'x';
    probel = ' '; 
    for (a = 1; a != 21; a++) {
        for (p = 1; p != p2; p++) {
            cout << probel;
        }
        for (i = 1; i != i2; i++) {
            cout << x;
        }
        cout << '\n';
        p2--;
        i2++;
    }
}


