#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  for(int i=0; i<n; i++)
  {
    int x;
    cin>>x;
    long long int ar[x];
    for(int j=0; j<x; j++)
    {
      cin>>ar[j];
    }
    int m=ar[0];
    for(int j=1; j<x; j++)
    {
      for(int k=j+1; k<=x; k++)
      {
        int ans=ar[j-1]+ar[k-1]+k-j;
        if(ans<m)
        {
          m=ans;
        }
      }
    }
    cout<<m<<" ";
  }



  return 0;
}