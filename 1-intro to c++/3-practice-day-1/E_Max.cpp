#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int a[n];
  int m=INT_MIN;
  for(int i=0; i<n; i++)
  {
    cin>>a[i];
    if(a[i]>m) m=a[i];
  }
  cout<<m;


  return 0;
}