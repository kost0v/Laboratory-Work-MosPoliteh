struct time {
public:  int hours;
public:    int minutes;
public:    int seconds;
public:    int totalsecs;
}t1, t2, t3;
#include <iostream>


using namespace std;

int main()
{
    int long totalsecs;
    char h;
    setlocale(LC_ALL, "Russian");
    cout << "Введите время в формате часы.минуты.секунды.\n";
    cin >> (t1.hours) >> h >> (t1.minutes) >> h >> (t1.seconds);
    t1.totalsecs = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    cout << "Введите время в формате часы.минуты.секунды.\n";
    cin >> (t2.hours) >> h >> (t2.minutes) >> h >> (t2.seconds);
    t2.totalsecs = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
    t3.totalsecs = t1.totalsecs + t2.totalsecs;
    t3.hours = t3.totalsecs / 3600;
    t3.minutes = (t3.totalsecs % 3600) / 60;
    t3.seconds = (t3.totalsecs % 3600) % 60;
    cout << (t3.hours) << h << (t3.minutes) << h << (t3.seconds);
}
