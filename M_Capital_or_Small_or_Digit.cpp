#include<bits/stdc++.h>
using namespace std;

int main(){
       
       char input;
       cin>>input;

       if (isupper(input)) {
        cout << "ALPHA" <<endl;
        cout << "IS CAPITAL" <<endl;
    } else if (islower(input)) {
        cout << "ALPHA" <<endl;
        cout << "IS SMALL" <<endl;
    } else if (isdigit(input)) {
        cout << "IS DIGIT" <<endl;
    } else {
        cout << "NOT ALPHANUMERIC" <<endl;
    }
       
       
       return 0;



}