#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a,b,c;
  cin>>a>>b>>c;
  int min=a,max=a;
  if(b>=a && b>=c)
  {
    max=b;
  }
  else if(c>=a && c>=b)
  {
    max=c;
  }

  if(b<=a && b<=c)
  {
    min=b;
  }
  else if(c<=a && c<=b)
  {
    min=c;
  }

  cout<<min<<" "<<max;

  return 0;
}