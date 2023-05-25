#include<bits/stdc++.h>
using namespace std;

class Student
{
	public:
    char name[100];
    int roll;
    char section;
    int math_marks;
    int cls;

    Student(char* n,int r,char s,int mm,int c)
    {
      strcpy(name,n);
      roll=r;
      section=s;
      math_marks=mm;
      cls=c;
    }
};

int main()
{
  Student sawon("Sawon", 17, 'A', 95, 9);
  Student sumon("Sumon", 6, 'B', 98, 9);
  Student gopi("Gopi", 43, 'A', 87, 9);

  if(sawon.math_marks>gopi.math_marks && sawon.math_marks>sumon.math_marks)
  {
    cout << sawon.name << endl;
  }
  else if(gopi.math_marks>sawon.math_marks && gopi.math_marks>sumon.math_marks)
  {
    cout << gopi.name << endl;
  }
  else cout << sumon.name << endl;

  return 0;
}