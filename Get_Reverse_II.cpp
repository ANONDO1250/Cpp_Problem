#include <bits/stdc++.h>
using namespace std;
// Create class
class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};

int main()
{

    int n;
    cin >> n;
    Student All_student[n];
    int id_of_r[n];

    for (int i = 0; i < n; i++)
    {
        cin >> All_student[i].nm;
        cin >> All_student[i].cls;
        cin >> All_student[i].s;
        cin >> All_student[i].id;
    }

    for (int i = 0; i < n; i++)
    {
        id_of_r[i] = All_student[i].id;
    }

    int j = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        All_student[j].id = id_of_r[i];
        j++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << All_student[i].nm << " ";
        cout << All_student[i].cls << " ";
        cout << All_student[i].s << " ";
        cout << All_student[i].id << " ";
        cout << endl;
    }

    return 0;
}