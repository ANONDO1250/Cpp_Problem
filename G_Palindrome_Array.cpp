#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool ispalidrom = true;
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        if (arr[start] != arr[end])
        {
            ispalidrom = false;
            break;
        }
        start++;
        end--;
    }
    if (ispalidrom)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}