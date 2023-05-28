#include<bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  // string:: iterator it;
  cin>>s;
  // cout<<*s.begin()<<endl;
  // cout<<*(s.end()-1)<<endl;
  // for(it=s.begin();it<s.end();it++)
  // {
  //   cout<<*it<< " ";
  // }
  for(auto it=s.begin();it<s.end();it++)
  {
    cout<<*it<<" ";
  }

  return 0;
}