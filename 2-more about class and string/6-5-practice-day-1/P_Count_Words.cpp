#include<bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  getline(cin,s);
  int count=0;

  bool con=true;

  for(char c:s)
  {
    if(isalpha(c))
    {
     if(con) count++;
     con=false;
    }
    else con=true;
  }

  cout<<count<<endl;

  return 0;
}