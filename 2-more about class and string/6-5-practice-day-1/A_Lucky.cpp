#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    int ans=0;
    
    for(int j=0;j<6;j++)
    {
      int ne=x%10;
      x=x/10;
      if(j>2) ans=ans+ne;
      
      else ans=ans-ne;
    }

    if(ans==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }

  return 0;
}