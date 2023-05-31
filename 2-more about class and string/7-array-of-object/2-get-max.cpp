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

  Student mx;
  mx.mark=INT_MIN;
  for(int i =0; i < 3; i++)
  {
    if(a[i].mark>mx.mark)
    {
      mx=a[i];
    }
  }

  cout<<"####Max Object####"<<endl<<"Name: "<<mx.name<<endl<<"Roll: "<<mx.roll<<endl<<"Mark: "<<mx.mark<<endl<<"Class: "<<mx.cls<<endl<<endl;

  Student mn;
  mn.mark=INT_MAX;
  for(int i =0; i < 3; i++)
  {
    if(a[i].mark<mn.mark)
    {
      mn=a[i];
    }
  }

  cout<<"####Min Object####"<<endl<<"Name: "<<mn.name<<endl<<"Roll: "<<mn.roll<<endl<<"Mark: "<<mn.mark<<endl<<"Class: "<<mn.cls<<endl;

  return 0;
}