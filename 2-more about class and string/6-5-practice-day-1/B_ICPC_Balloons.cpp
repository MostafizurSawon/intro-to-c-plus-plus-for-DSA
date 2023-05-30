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
    string a;
    cin>>a;
    int freq[26]={0};
    int ans=0;

    for(int j = 0; j < a.length(); j++)
    {
      int c=a[j]-'A';
      
      freq[c]++;
      if(freq[c]==1) ans+=2;
      else ans++;
    }
    
    cout<<ans<<endl;

  }
  

  return 0;
}