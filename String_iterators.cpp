#include <bits/stdc++.h>
using namespace std;

int main()
{
    string d;
    string::iterator it;
    cin >> d;
    // for (int i = 0; i < d.size(); i++)
    // {
    //     cout << d[i] << endl;
    // }
    // cout << *d.begin() << endl;
    // cout << *(d.end() - 1) << endl;

    // for (it = d.begin(); it < d.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    for (auto it = d.begin(); it < d.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}