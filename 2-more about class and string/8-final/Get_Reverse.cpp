#include<bits/stdc++.h>
using namespace std;

class Student
{
  public:
    string name;
    int cls;
    string sec;
    int mark_math;
    int mark_eng;
};


int main()
{
  int n;
  cin >> n;
  Student a[n];

  for(int i = 0; i < n; i++)
  {
    cin>>a[i].name>>a[i].cls>>a[i].sec>>a[i].mark_math>>a[i].mark_eng;
  }

  // for(int i = n-1; i >= 0; i--)
  // {
  //   cout<<a[i].name<<" "<<a[i].cls<<" "
  //   <<a[i].sec<<" "<<a[i].mark_math<<" "<<a[i].mark_eng<<endl;
  // }

  for(int i = 0,j=n-1; i < j;i++,j--)
  {
    swap(a[i].name,a[j].name);
    swap(a[i].cls,a[j].cls);
    swap(a[i].sec,a[j].sec);
    swap(a[i].mark_math,a[j].mark_math);
    swap(a[i].mark_eng,a[j].mark_eng);
  }

    for(int i = 0; i < n; i++)
  {
    cout<<a[i].name<<" "<<a[i].cls<<" "
    <<a[i].sec<<" "<<a[i].mark_math<<" "<<a[i].mark_eng<<endl;
  }

  return 0;
}