#include<bits/stdc++.h>
using namespace std;

class Student
{
  public:
    char name[100];
    int roll;
    char section;
    int cls;
    float height;

    Student(int r, char s, int c,float h,char *n)
    {
      roll = r;
      section = s;
      cls = c;
      height = h;
      strcpy(name, n);
    }
};

int main()
{
  Student sawon(2,'A',9,5.9,"Sawon");
  Student sumon(1,'A',9,5.8,"Sumon");
  

  cout<<"Name: "<<sawon.name<<endl<<"Class: "<<sawon.cls<<endl<<"Roll: "<<sawon.roll<<endl<<"Section: "<<sawon.section<<endl<<"Height: "<<sawon.height<<endl<<endl;

  cout<<"Name: "<<sumon.name<<endl<<"Class: "<<sumon.cls<<endl<<"Roll: "<<sumon.roll<<endl<<"Section: "<<sumon.section<<endl<<"Height: "<<sumon.height<<endl;

  return 0;
}