#include<bits/stdc++.h>
using namespace std;

int main(){
   
      int n,p,ll;
        cin>>n>>p>>ll;
      

        int mn=min(n,p);
        int mn2=min(mn,ll);
        int mm=max(n,p);
        int mm2=max(mm,ll);
        cout<<mn2<<" "<<mm2;
    
             
        


       return 0;



}