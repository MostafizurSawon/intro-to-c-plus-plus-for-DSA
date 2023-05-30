#include<bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  getline(cin,s);
  while(s.find("EGYPT")!=-1)
  {
    int n=s.find("EGYPT");
    s.replace(n,5," ");
  }
  cout<<s;

  return 0;
}