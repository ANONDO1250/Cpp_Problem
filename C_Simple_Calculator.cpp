#include<bits/stdc++.h>
using namespace std;

int main(){
       
       int num1,num2;
       cin>>num1>>num2;

       int sum = num1 + num2;
       long long product = static_cast<long long>(num1) * num2; 
       int difference = num1 - num2;
        cout << num1 << " + " << num2 << " = " << sum << endl;
        cout << num1 << " * " << num2 << " = " << product << endl;
        cout << num1 << " - " << num2 << " = " << difference << endl;
       
       
       
       return 0;



}