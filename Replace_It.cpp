#include <bits/stdc++.h>
using namespace std;

int main()
{

    int testCase;
    cin >> testCase;
    for (int t = 0; t < testCase; t++)
    {
        // string theke input nebo
        string x;
        cin >> x;
        string s;
        cin >> s;

        while (x.find(s) != -1)
        {
            x.replace(x.find(s), s.size(), "$");
        }

        cout << x << endl;
    }

    return 0;
}