#include <bits/stdc++.h>
using namespace std;

string reverseword(const string &word)
{

    string rev = word;
    reverse(rev.begin(), rev.end());
    return rev;
}

string reverseSentence(const string &sentence)
{
    stringstream ss(sentence);
    string word;
    string revSentence;

    while (ss >> word)
    {
        revSentence = revSentence + reverseword(word) + " ";
    }

    revSentence.pop_back();

    return revSentence;
}

int main()
{
    string sentence;

    getline(cin, sentence);

    string reversedSentence = reverseSentence(sentence);

    cout << reversedSentence;

    return 0;
}