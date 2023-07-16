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
    int math_marks;
    int english_marks;
    int total_marks;
};
// Create the compare function for the sort
bool compare(Student a, Student b)
{
    if (a.total_marks == b.total_marks)
    {
        return a.id < b.id;
    }
    else
    {
        return a.total_marks > b.total_marks;
    }
}

int main()
{

    int n;
    cin >> n;

    Student allTheStudent[n];

    for (int i = 0; i < n; i++)
    {
        cin >> allTheStudent[i].nm;
        cin >> allTheStudent[i].cls;
        cin >> allTheStudent[i].s;
        cin >> allTheStudent[i].id;
        cin >> allTheStudent[i].math_marks;
        cin >> allTheStudent[i].english_marks;
        allTheStudent[i].total_marks = allTheStudent[i].math_marks + allTheStudent[i].english_marks;
    }

    sort(allTheStudent, allTheStudent + n, compare);

    for (int i = 0; i < n; i++)
    {
        cout << allTheStudent[i].nm << " ";
        cout << allTheStudent[i].cls << " ";
        cout << allTheStudent[i].s << " ";
        cout << allTheStudent[i].id << " ";
        cout << allTheStudent[i].math_marks << " ";
        cout << allTheStudent[i].english_marks;
        cout << endl;
    }

    return 0;
}