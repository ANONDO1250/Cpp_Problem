#include <bits/stdc++.h>
using namespace std;

int main()
{

    int A, B, C;
    char S, Q;
    cin >> A >> S >> B >> Q >> C;

    if (Q == '=')
    {
        int result;
        if (S == '+')
        {
            result = A + B;
        }
        else if (S == '-')
        {
            result = A - B;
        }
        else if (S == '*')
        {
            result = A * B;
        }
        if (result == C)
        {
            cout << "Yes";
        }
        else
        {
            cout << result << endl;
        }
    }

    return 0;
}
