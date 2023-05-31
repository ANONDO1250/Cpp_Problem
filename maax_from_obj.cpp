#include <bits/stdc++.h>
using namespace std;

class Students
{
public:
    string name;
    int id;
    int marks;
};

int main()
{
    Students max[2];

    for (int i = 0; i < 2; i++)
    {
        getline(cin, max[i].name);
        cin >> max[i].id >> max[i].marks;
        cin.ignore();
    }
    Students mx;
    mx.marks = INT_MIN;
    for (int i = 0; i < 2; i++)
    {
        if (max[i].marks > mx.marks)
        {
            mx = max[i];
        }
    }
    cout << mx.name;
    return 0;
}