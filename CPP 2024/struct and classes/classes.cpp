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
};

int main()
{
    Student s;
    // s.id = 23; this can't be done because it si declared as pruivate member in a class
    s.getdata();
    return 0;
}