#include <bits/stdc++.h>
using namespace std;
// Create class
class Student
{
public:
    string nm;
    int cls;
    char s;
    int math_marks;
    int _eng_mark_s;
};

int main()
{

    int n;
    cin >> n;
    Student All_student[n];

    for (int i = 0; i < n; i++)
    {
        cin >> All_student[i].nm;
        cin >> All_student[i].cls;
        cin >> All_student[i].s;
        cin >> All_student[i].math_marks;
        cin >> All_student[i]._eng_mark_s;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << All_student[i].nm << " ";
        cout << All_student[i].cls << " ";
        cout << All_student[i].s << " ";
        cout << All_student[i].math_marks << " ";
        cout << All_student[i]._eng_mark_s << " ";
        cout << endl;
    }

    return 0;
}