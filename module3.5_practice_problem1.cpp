#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    string name;
    int roll;
    string section;
    int math_marks;
    string cls;

    Student(string n, int r, string s, int mm, string c)
    {
        name = n;
        roll = r;
        section = s;
        math_marks = mm;
        cls = c;
    }
};

int main()
{
    // Create three static objects using the constructor
    Student student1("John", 1, "A", 90, "10th");
    Student student2("Emily", 2, "B", 95, "10th");
    Student student3("Michael", 3, "A", 92, "10th");

    // Compare math_marks and find the student with the highest marks
    Student highestMarksStudent = student1;
    if (student2.math_marks > highestMarksStudent.math_marks)
    {
        highestMarksStudent = student2;
    }
    if (student3.math_marks > highestMarksStudent.math_marks)
    {
        highestMarksStudent = student3;
    }

    // Print the name of the student with the highest math_marks
    cout << "Student with the highest math marks: " << highestMarksStudent.name << endl;

    return 0;
}
