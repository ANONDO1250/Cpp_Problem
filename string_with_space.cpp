#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    string word;
    // cin >> name;
    getline(cin, name);
    stringstream ss(name);

    while (ss >> word)
    {
        cout << word << endl;
    }

    cout << name << endl;
    cout << name.size();
    return 0;
}