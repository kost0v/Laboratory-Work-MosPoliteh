#include <iostream>
#include <cstring>
#include <Windows.h>

using namespace std;

struct task1 {
	void addarrays(float* mas1, float* mas2, float* mas3, int a) {
		for (int i = 0; i < a; i++) {
			mas3[i] = mas1[i] + mas2[i];
			cout << "Сумма в " << i + 1 << " ячейке: " << mas3[i] << endl;
		}
	}
	void task_main() {
		float mas1[2] = { 2, 3 };
		float mas2[2] = { 6, 7 };
		float mas3[2];
		addarrays(mas1, mas2, mas3, 2);
	}
};
struct task2 {
	int CompStr(char* s1, char* s2)
	{

		for (int i = 0; (s1[i] != '\0') || (s2[i] != '\0'); i++)
		{
			if (s1[i] > s2[i])
				return 1;
			else if (s2[i] > s1[i])
				return -1;
		}
		return 0;
	}
	void task_main()
	{
		char* str1 = new char[80], * str2 = new char[80];
		char prob = '/';
		cout << "Введите две строки(через enter,eng), которые хотите сравнить" << endl;
		cout << "Если вторая строка идет первее по алфавиту, программа вернет 1" << endl;
		cout << "Если первая строка идет первее по алфавиту, программа вернет -1" << endl;
		cout << "Если равны, программа вернет 0" << endl;
		cin >> str1;
		cin >> str2;
		cout << CompStr(str1, str2);
	}
};
struct task3 {
	void task_main() {
		const int s = 10;
		int a0[] = { 0,1,2,3,4,5,6,7,8,9 };
		int a1[] = { 10,11,12,13,14,15,16,17,18,19 };
		int a2[] = { 20,21,22,23,24,25,26,27,28,29 };
		int a3[] = { 30,31,32,33,34,35,36,37,38,39 };
		int a4[] = { 40,41,42,43,44,45,46,47,48,49 };
		int a5[] = { 50,51,52,53,54,55,56,57,58,59 };
		int a6[] = { 60,61,62,63,64,65,66,67,68,69 };
		int a7[] = { 70,71,72,73,74,75,76,77,78,79 };
		int a8[] = { 80,81,82,83,84,85,86,87,88,89 };
		int a9[] = { 90,91,92,93,94,95,96,97,98,99 };
		int** ap = new int* [s];
		ap[0] = a0;
		ap[1] = a1;
		ap[2] = a2;
		ap[3] = a3;
		ap[4] = a4;
		ap[5] = a5;
		ap[6] = a6;
		ap[7] = a7;
		ap[8] = a8;
		ap[9] = a9;
		cout << "массив: \n";
		for (int i = 0; i < s; i++) {
			for (int k = 0; k < s; k++) {
				cout << " " << ap[i][k];
			}
			cout << endl;
		}
	}
};
struct task4 {
	void task_main() {
			setlocale(LC_ALL, "Russian");
			const int MAXSIZE = 10;
			int* ap[MAXSIZE];
			int NUMARRAYS = 10, m = 0;
			for (int j = 0; j < MAXSIZE; j++) {
				*(ap + j) = new int[MAXSIZE];
			}
			cout << "массив: \n";
			for (int j = 0; j < 10; j++) {
				for (int k = 0; k < 10; k++) {
					*(*(ap + j) + k) = m++;
					cout << " " << *(*(ap + j) + k);
				}
				cout << endl;
			}
		}
};
struct task5 {
	struct Person
	{
		int salary = 0;
		char* pName = new char[20];
		Person()
		{

		}
		Person(char* h, int sala)
		{
			SetData(h, sala);
		}
		void GetData()
		{
			cout << "Salary: " << salary << endl;
			cout << "Name: ";
			for (int i = 0; *(pName + i) != '\0'; i++)
			{
				cout << *(pName + i);
			}
			cout << endl;
		}
		void SetData(char* h, int sal)
		{
			pName = h;
			salary = sal;
		}
	};
	void Sort(Person* pArr, int size)
	{
		int i = 0, j = 0;
		for (i = 1; i < size; i++)
		{
			int indBuf = i;
			Person buf = *(pArr + i);
			for (j = i; (j > 0) && (pArr[j - 1].salary < buf.salary); j--)
			{
				pArr[j] = pArr[j - 1];
			}
			pArr[j] = buf;
		}
	}
	void ArrInfo(Person* pArr, int size)
	{
		for (int i = 0; i < size; i++)
		{
			(pArr + i)->GetData();
		}
	}
	Person InitPerson()
	{
		cin.ignore();
		int s;
		char* h = new char[30];
		cout << "Введите имя сотрудника: ";
		cin.getline(h, 30);
		cout << "Введите зарплату сотрудника: ";
		cin >> s;
		cin.ignore();
		return Person(h, s);
	}
	void task_main()
	{
		setlocale(LC_ALL, "Russian");
		Person* Pperson = new Person[5];
		for (int i = 0; i < 5; i++)
		{
			*(Pperson + i) = InitPerson();
		}
		ArrInfo(Pperson, 5);
		Sort(Pperson, 5);
		cout << "=================================================" << endl;
		ArrInfo(Pperson, 5);
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
