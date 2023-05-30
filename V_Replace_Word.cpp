#include <bits/stdc++.h>
using namespace std;

int main()
{
    string word;
    getline(cin, word);
    while (word.find("EGYPT") != -1)
    {
        word.replace(word.find("EGYPT"), 5, " ");
    }
    cout << word << endl;
    return 0;
}