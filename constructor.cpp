#include <bits/stdc++.h>
using namespace std;

class student
{

public:
      char name[100];
      int roll;
      int clas;
      char section;

      student  (int r, char s, int c, char *n)
      {

            roll = r;
            section = s;
            clas = c;
            strcpy(name, n);
      }
};

int main()
{

      student Mehedi(2085, 'A', 10, "Mehedi Hasan");
      cout << Mehedi.name << endl;
      cout << Mehedi.roll << endl;
      cout << Mehedi.clas << endl;
      cout << Mehedi.section << endl;

      return 0;
}