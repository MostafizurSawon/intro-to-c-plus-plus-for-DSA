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
};

int main()
{
  Student sawon;
  sawon.roll=17;
  sawon.section= 'A';
  char na[100]="Md Mostafizur Rahman Sawon";
  sawon.height=5.11;
  strcpy(sawon.name,na);
  sawon.cls=7;

  cout<<"Name: "<<sawon.name<<endl<<"Class: "<<sawon.cls<<endl<<"Roll: "<<sawon.roll<<endl<<"Section: "<<sawon.section<<endl<<"Height: "<<sawon.height<<endl;

  return 0;
}