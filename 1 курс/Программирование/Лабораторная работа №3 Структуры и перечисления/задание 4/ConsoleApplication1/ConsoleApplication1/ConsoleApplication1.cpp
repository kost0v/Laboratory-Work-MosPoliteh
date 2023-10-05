struct time {
public:  int hours;
public:    int minutes;
public:    int seconds;
public:    int totalsecs;
}t1;
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
    cout << t1.totalsecs << " Сек";

}


