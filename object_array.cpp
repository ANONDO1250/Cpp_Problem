#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    string name;
    int id;
    string gender;
    int phone;
};

int main()

{
    Student a[2];

    for (int i = 0; i < 2; i++)
    {
        getline(cin, a[i].name);
        cin >> a[i].id >> a[i].gender >> a[i].phone;

        cin.ignore();
    }

    for (int i = 0; i < 2; i++)
    {
        cout << a[i].name << endl;
        cout << a[i].id << endl;
        cout << a[i].gender << endl;
        cout << a[i].phone << endl;
    }

    return 0;
}