#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;

        bool operator<(const Student &other) const
    {
        if (marks == other.marks)
        {
            return roll < other.roll;
        }
        return marks > other.marks;
    }
};

int main()
{
    int N;
    cin >> N;

    Student *students = new Student[N];

    for (int i = 0; i < N; i++)
    {
        cin >> students[i].name >> students[i].roll >> students[i].marks;
    }

    sort(students, students + N);

    for (int i = 0; i < N; i++)
    {
        cout << students[i].name << " " << students[i].roll << " " << students[i].marks << endl;
    }

    delete[] students;

    return 0;
}
