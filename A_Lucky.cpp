#include <bits/stdc++.h>
using namespace std;

bool isLuckyTicket(const string &ticket)
{
    int sumFirstThree = 0;
    int sumLastThree = 0;

    for (int i = 0; i < 3; i++)
    {
        sumFirstThree += ticket[i] - '0';
        sumLastThree += ticket[i + 3] - '0';
    }

    return sumFirstThree == sumLastThree;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string ticket;
        cin >> ticket;

        string answer = isLuckyTicket(ticket) ? "YES" : "NO";
        cout << answer << endl;
    }

    return 0;
}
