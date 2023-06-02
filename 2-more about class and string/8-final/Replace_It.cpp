#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  while(n>0)
  {
      string s,g;
      cin>>s>>g;
      int ln=g.length();
      while(s.find(g)!=-1)
      {
        int x=s.find(g);
        s.replace(x,ln,"$");
      }
      cout<<s<<endl;
      n--;
  }

  return 0;
}