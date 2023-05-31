#include<bits/stdc++.h>
using namespace std;

class Student
{
  public:
    string name;
    int roll;
    int mark;
    int cls;
};

int main()
{
  Student a[3];

  for(int i = 0; i < 3; i++)
  {
    getline(cin, a[i].name);
    cin>>a[i].roll>>a[i].mark>>a[i].cls;
    cin.ignore();
  }

  for(int i = 0; i < 3; i++)
  {
    cout<<"Name: "<<a[i].name<<endl<<"Roll: "<<a[i].roll<<endl<<"Mark: "<<a[i].mark<<endl<<"Class: "<<a[i].cls<<endl<<endl;
  }

  return 0;
}