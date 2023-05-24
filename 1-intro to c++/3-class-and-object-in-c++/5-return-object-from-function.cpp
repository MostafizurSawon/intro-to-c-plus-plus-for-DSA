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

Student fun()
{
  char name[100]="Md Mostafizur Rahman";
  Student sawon(2,'A',9,5.9,name);
  return sawon;
}

int main()
{
  Student sawon=fun();
  

  cout<<"Name: "<<sawon.name<<endl<<"Class: "<<sawon.cls<<endl<<"Roll: "<<sawon.roll<<endl<<"Section: "<<sawon.section<<endl<<"Height: "<<sawon.height<<endl<<endl;


  return 0;
}