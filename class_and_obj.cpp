#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    char name[100];
    int roll;
    int clas;
    char section;
};



int main(){
       
     student s;
     s.clas=9;
     s.roll=2085;
     s.section= 'A';
     char nm[100]="Mehedi";
     strcpy(s.name,nm); 
       
       student mehedi;

       mehedi.roll=2085;
       mehedi.clas=10;
       mehedi.section='B';
       char nm2[100]="ANONDO";
       strcpy(mehedi.name,nm2);
       
       cout<< mehedi.clas;
       
       return 0;



}