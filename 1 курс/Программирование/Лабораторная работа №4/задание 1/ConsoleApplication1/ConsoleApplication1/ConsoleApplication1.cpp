
#include <iostream>


using namespace std;

long hms_to_secs(int hours, int minutes, int seconds) {
    long allsecs;
    allsecs = hours * 3600 + minutes * 60 + seconds;
    return allsecs;
}

int main()
{
    int hours; int minutes; int seconds;
    char h;
    setlocale(LC_ALL, "Russian");
    int i = 1;
    if (i != 0)
    {
        cout << "Введите время в формате часы.минуты.секунды\n";
        cin >> (hours) >> h >> (minutes) >> h >> (seconds);
        cout << "время в секундах: " << hms_to_secs(hours, minutes, seconds);
    }
 
}


