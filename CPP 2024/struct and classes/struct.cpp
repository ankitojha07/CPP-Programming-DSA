#include <bits/stdc++.h>
using namespace std;

struct student
{
    // structure members
    int id;
    char name[20];
    double fee;

    // member functions
    void getData()
    {
        cout << "Enter id, name and fee of the student : " << endl;
        cin >> id >> name >> fee;

        cout << name << " " << id << " INR" << fee << endl;
    }
} s;
// s is the streucture variable

int main()
{
    s.getData();
    return 0;
}