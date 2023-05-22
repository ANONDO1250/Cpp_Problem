#include<bits/stdc++.h>
using namespace std;

int main(){
       
       
       
       int n;
        cin>>n;
        int number[1000];

        for (int i = 0; i < n; i++)
        {
            cin>>number[i];
        }
    
             int maxVal = *max_element(number, number + n);
              cout << maxVal << endl;
              
              
        
       
       
       return 0;



}