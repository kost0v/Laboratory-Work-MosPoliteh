#include <iostream>
using namespace std;
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
    int s;
    char* h = new char[30];
    cout << "Введите имя сотрудника: ";
    cin.getline(h, 30);
    cout << "Введите зарплату сотрудника: ";
    cin >> s;
    cin.ignore();
    return Person(h, s);
}
int main()
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
