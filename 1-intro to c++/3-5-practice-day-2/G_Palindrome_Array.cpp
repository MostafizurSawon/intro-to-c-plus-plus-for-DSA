#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int ar[n];
  for(int i=0; i<n; i++)
  {
    cin>> ar[i];
  }

  int flag = 0;
  for(int i=0, j=n-1; i<j; i++, j--)
  {
    if(ar[i] != ar[j]) flag=1;
  }
  if(flag==0) cout<<"YES";
  else cout<<"NO";

  return 0;
}