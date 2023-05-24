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
  char name[100]="Md Mostafizur Rahman";
  Student *sawon = new Student(2,'A',9,5.9,name);
  (*sawon).cls=10;
  sawon->roll=1;

  // cout << (*sawon).cls << endl;

  cout<<"Name: "<<sawon->name<<endl<<"Class: "<<sawon->cls<<endl<<"Roll: "<<sawon->roll<<endl<<"Section: "<<sawon->section<<endl<<"Height: "<<sawon->height<<endl<<endl;

  // Shotcut ->
  // (*sawon). = sawon->

  // delete an object
  delete sawon;

   cout<<"Name: "<<sawon->name<<endl<<"Class: "<<sawon->cls<<endl<<"Roll: "<<sawon->roll<<endl<<"Section: "<<sawon->section<<endl<<"Height: "<<sawon->height<<endl<<endl;

  return 0;
}