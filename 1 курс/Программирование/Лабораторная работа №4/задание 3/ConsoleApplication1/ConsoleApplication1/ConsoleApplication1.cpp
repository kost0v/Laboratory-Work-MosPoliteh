#include <iostream>
using namespace std; 

void Swap(int &first, int &second) {
	int buf = first;
	first = second;
	second = buf;
}
struct Time {
	long hours;
	long minutes;
	long seconds;
	static void SwapTime(Time& time1, Time& time2) {
		Time buf;
		buf = time1;
		time1 = time2;
		time2 = buf;
	}
	void GetInfo() {
		cout << hours << ":" << minutes << ":" << seconds;
	}
};
	int main() {
		setlocale(LC_ALL, "Russian");
		Time firstTime, SecondTime;
		cout << "Введите первое значение времени(через enter)" << endl;
		cin >> firstTime.hours >> firstTime.minutes >> firstTime.seconds;
		cout << "Введите второе значение времени(через enter)" << endl;
		cin >> SecondTime.hours >> SecondTime.minutes >> SecondTime.seconds;
		cout << "Значение первой и второй переменной до операции 'swap': ";
	    firstTime.GetInfo();
		cout << "||";
		SecondTime.GetInfo();
		cout << endl;
		Time::SwapTime(firstTime, SecondTime);
		cout << "Значение первой и второй переменной после операции 'swap': ";
	    firstTime.GetInfo();
		cout << "||";
		SecondTime.GetInfo();
		cout << endl;