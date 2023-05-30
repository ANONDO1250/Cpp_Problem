#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    float height;
    int age;

    Person(const string &personName, float personHeight, int personAge)
        : name(personName), height(personHeight), age(personAge)
    {
    }
};

int main()
{
    Person person1("Mehedi Hasan", 180.5, 22);
    Person person2("Monisha Akter Asha", 155.0, 20);

    if (person1.age > person2.age)
    {
        cout << person1.name << "'s age is greater." << endl;
    }
    else if (person1.age < person2.age)
    {
        cout << person2.name << "'s age is greater." << endl;
    }
    else
    {
        cout << "Both persons have the same age." << endl;
    }

    return 0;
}
