#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    char S;

    cin >> A >> S >> B;

    if (S == '>' || S == '<' || S == '=')
    {
        int result;
        if (S == '>')
        {
            result = A > B;
        }
        else if (S == '<')
        {
            result = A < B;
        }
        else if (S == '=')
        {

            result = A = B;
        }
        else
        {
            cout << result;
        }

        if (result == 0)
        {
            cout << "Wrong" << endl;
        }
        else if (result == 1)
        {
            cout << "Right" << endl;
        }

        else
        {
            cout << "Right" << endl;
        }
    }

    return 0;
}
