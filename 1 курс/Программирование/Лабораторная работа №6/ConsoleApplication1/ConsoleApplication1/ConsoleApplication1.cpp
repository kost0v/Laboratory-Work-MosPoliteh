#include <iostream>
#include <cstring>
#include <Windows.h>

using namespace std;

struct task1 {
	class Double {
	public:
		double field;
		Double(double v) {
			field = v;
		}
		int method_zero() {
			field = 0;
		};
		void method_int(int v) {
			field = v;
		}
		void method_Enter() {
			cout << "Вывод поля на экран: " << field;
		}
		static Double mothod_sum(Double v1, Double v2) {
			return Double(v1.field + v2.field);
		}
	};
	void task_main() {
		Double v1(0);
		Double v2(0);
		char space = ' ';
		cout << "Введите числа через Enter: \n";
		cin >> v1.field;
		cin >> v2.field;
		Double v3 = Double::mothod_sum(v1.field, v2.field);
		v3.method_Enter();
	}
};
struct task2 {
	class Employee {
	public:
		int nomber;
		float salary;
		void Input() {
			cout << "Введите данные о сотруднике. \n";
			cout << "Номер сотрудника:";
			cin >> nomber;
			cout << "Оклад сотрудника:";
			cin >> salary;
		}
		void Enter() {
			cout << "Номер сотрудника в базе: " << nomber << endl;
			cout << "Оклад сотрудника в базе: " << salary << endl;
			cout << "__________________________\n";
		}
	};
	void task_main() {
		Employee mas[3] = { 'v1','v2','v3', };
		for (int i = 0; i < 3; i++) {
			mas[i].Input();
			mas[i].Enter();
		}
	}
};
struct task3 {
	class Date {
	public:
		int month, day, year;
		void getdate() {
			char slahs = '/';
			cout << "Введите время в фромате EU:месяц/день/год.\n";
			cin >> month >> slahs >> day >> slahs >> year;
		}
		void showdate() {
			char slahs = '/';
			cout << "Вывод времени в формате RU:день/месяц/год.\n";
			cout << day << slahs << month << slahs << year;
		}
	};
	void task_main() {
		Date v;
		v.getdate();
		v.showdate();
	}
};
struct task4 {
	class Time {
	public:
		int  hour, minute, second;
		int day = 0;
		Time(int h, int m, int s)
		{
			hour = h;
			minute = m;
			second = s;
		}
		Time()
		{
			zero(0);
		}
		void zero(int a = 0) {
			hour = a;
			minute = a;
			second = a;
			day = a;
		}
		void reduction() {
			if (second >= 60) {
				second = second - 60;
				minute = minute + 1;
			}
			if (minute >= 60) {
				minute = minute - 60;
				hour = hour + 1;
			}
			if (hour > 23) {
				hour = hour - 24;
				day = day + 1;
			}
		}
		void gettime() {
			char s = ':';
			cout << "Введите время в фромате часы:минуты:секунды\n";
			cin >> hour >> s >> minute >> s >> second;
			day = 0;
		}
		static Time sumtime(Time t1, Time t2) {
			int hour, minute, second;
			hour = t1.hour + t2.hour;
			minute = t1.minute + t2.minute;
			second = t1.second + t2.second;
			return Time(hour, minute, second);
		}
		void Entertime() {
			reduction();
			char s = ':';
			if (day > 0) {
				cout << "Время в базе: " << "Дней: " << day << " | Время: " << hour << s << minute << s << second;
			}
			else {
				cout << "Время в базе: " << hour << s << minute << s << second;
			}
		}
	};
	void task_main() {
		Time t1;
		t1.gettime();
		Time t2;
		t2.gettime();
		Time t3 = Time::sumtime(t1, t2);
		t3.reduction();
		t3.Entertime();
	}
};
struct task5 {
	class Employee {
	private:
		int nomber;
		float salary;
	public:
		class Date {
		public:
			int month, day, year;
			void getdate() {
				char slahs = '/';
				cout << "Введите время приема сотрудника на работу в фромате RU(день/месяц/год).\n";
				cin >> day >> slahs >> month >> slahs >> year;
			}
			void showdate() {
				char slahs = '/';
				cout << "Временя приема сотрудника на работу в формате RU: ";
				cout << day << slahs << month << slahs << year;
			}
		};
		class Etype
		{	
		public:
			char i;
			void etypezero(char d)
			{
				i = d;
			}
			void etype()
			{
				cout << " Введите  первую букву должности сотрудника: \n"
					"(laborer, secretary, manager, accountant, executive, researcher) : \n";
				cin >> i;
			}
			void print() {
				switch (i)
				{
				case 'l':
					cout << "Полное название должности: laborer";
					break;
				case 's':
					cout << "Полное название должности: secretary";
					break;
				case 'm':
					cout << "Полное название должности: manager";
					break;
				case 'a':
					cout << "Полное название должности: accountant";
					break;
				case 'e':
					cout << "Полное название должности: executive";
					break;
				case 'r':
					cout << "Полное название должности: researcher";
					break;
				}


			}
		};
		Date date;
		Etype post;
		void getemploy() {
			cout << "Введите данные о сотруднике. \n";
			cout << "Номер сотрудника:";
			cin >> nomber;
			cout << "Оклад сотрудника:";
			cin >> salary;
			date.getdate();
			post.etype();
		}
		void putemploy() {
			cout << "Номер сотрудника в базе: " << nomber << endl;
			cout << "Оклад сотрудника в базе: " << salary << endl;
			date.showdate();
			cout << "\n";
			post.print();
			cout << "\n";
			cout << "__________________________\n";
		}
	};
	void task_main() {
		Employee v1;
		v1.getemploy();
		v1.putemploy();
		Employee v2;
		v2.getemploy();
		v2.putemploy();
		Employee v3;
		v3.getemploy();
		v3.putemploy();
	}
};

int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int checknomber;
	for (int checknomber = -1; checknomber != 0;) {
		switch (checknomber)
		{
		case 1:
			task1 t1;
			t1.task_main();
			cout << "" << endl;
			break;
		case 2:
			task2 t2;
			t2.task_main();
			cout << "" << endl;
			break;
		case 3:
			task3 t3;
			t3.task_main();
			cout << "" << endl;
			break;
		case 4:
			task4 t4;
			t4.task_main();
			cout << "" << endl;
			break;
		case 5:
			task5 t5;
			t5.task_main();
			cout << "" << endl;
			break;
		}
		cout << "Для окончания работы введите 0\n";
		cout << "Введите номер задания: ";
		cin >> checknomber;;
	}

}
