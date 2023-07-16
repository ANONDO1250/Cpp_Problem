#include <bits/stdc++.h>
using namespace std;

int main()
{

    string N;
    getline(cin, N);

    stringstream ss(N);
    string words;

    int flag = 0;

    while (ss >> words)
    {
        if (words == "Ratul")
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}