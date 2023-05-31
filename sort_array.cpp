#include <bits/stdc++.h>
using namespace std;
class Student
{

public:
    string name;
    int id;
    int marks;
};

int main()

{
    Student a[2];

    for (int i = 0; i < 2; i++)
    {
        getline(cin, a[i].name);
        cin >> a[i].id;
        cin >> a[i].marks;
        cin.ignore();
    }

    // for (int i = 0; i < 2 - 1; i++)
    // {
    //     for (int j = i + 1; i < 2; j++)
    //     {
    //         if (a[i].marks > a[j].marks)
    //         {
    //             swap(a[i], a[j]);
    //         }
    //     }
    // }
    // sort_function

    for (int i = 0; i < 2; i++)
    {
        cout << a[i].name << " " << a[i].id << " " << a[i].marks << endl;
    }

    return 0;
}