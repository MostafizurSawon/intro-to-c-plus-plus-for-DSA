#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int cls;
        string sec;
        int id;
        int marks_math;
        int marks_eng;
};
bool cmp(Student a,Student b)
{
    if(a.marks_eng+a.marks_math > b.marks_eng+b.marks_math) return true;
    else if(a.marks_eng+a.marks_math == b.marks_eng+b.marks_math)
    {
      if(a.id<b.id) return true;
      else return false;
    }
    else return false;
}
int main()
{
    int n;
    cin >> n;
    Student a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i].name>>a[i].cls>>a[i].sec>>a[i].id>>a[i].marks_math>>a[i].marks_eng;
    }
    // sort function
    sort(a,a+n,cmp);
    
    for(int i=0;i<n;i++)
    {
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].sec<<" "<<a[i].id<<" "<<a[i].marks_math<<" "<<a[i].marks_eng<<endl;
    }
    return 0;
}