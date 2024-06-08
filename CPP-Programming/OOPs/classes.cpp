#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    int id;
    char name[20];

public:
    void getdata()
    {
        cin >> id >> name;
    }
    void showdata()
    {
        cout << id << " " << name << endl;
    }

    void testFun(); // fun declaration, this will be defined out of the class
};

void Student::testFun()
{
    cout << "Outside definition of function works";
}

int main()
{
    Student s;
    // s.id = 23; this can't be done because it si declared as pruivate member in a class
    s.getdata();
    s.testFun();
    return 0;
}