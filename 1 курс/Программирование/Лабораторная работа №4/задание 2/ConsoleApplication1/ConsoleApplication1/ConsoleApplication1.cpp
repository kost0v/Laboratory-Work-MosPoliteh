#include <iostream>
using namespace std;
struct Time {
public:  int hours;
public:    int minutes;
public:    int seconds;
public:    int totalsecs;
      void info() {
          cout << hours << "." << minutes << "." << seconds;
      }
}t1, t2, t3;
long time_to_secs(int hours, int minutes, int seconds) {
   long totalsecs = hours * 3600 + minutes * 60 + seconds;
   return totalsecs;
}
Time secs_to_time(int totalsecs) {
    long hours = totalsecs / 3600;
    long minutes = (totalsecs % 3600) / 60;
    long seconds = (totalsecs % 3600) % 60;
    Time final;
    final.hours = hours;
    final.minutes = minutes;
    final.seconds = seconds;
    return final;
}

int main()
{
    int long totalsecs;
    int l_hours;
    int  l_minutes;
    int l_seconds;
    char h;
    int a;
    setlocale(LC_ALL, "Russian");
    cout << "Введите время в формате часы.минуты.секунды.\n";
    cin >> (t1.hours) >> h >> (t1.minutes) >> h >> (t1.seconds);
    t1.totalsecs = time_to_secs(t1.hours, t1.minutes, t1.seconds);
    cout << "Введите время в формате часы.минуты.секунды.\n";
    cin >> (t2.hours) >> h >> (t2.minutes) >> h >> (t2.seconds);
    t2.totalsecs = time_to_secs(t2.hours, t2.minutes, t2.seconds);
    t3.totalsecs = t1.totalsecs + t2.totalsecs;
    secs_to_time(t3.totalsecs).info();
} 
