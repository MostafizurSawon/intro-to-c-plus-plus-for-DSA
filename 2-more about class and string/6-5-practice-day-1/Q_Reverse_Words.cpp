#include<bits/stdc++.h>
using namespace std;

int main()
{
  // string s;
  // getline(cin, s);

  // reverse(s.begin(), s.end()); 
  // cout<<s;

  string s;
  getline(cin,s);
  stringstream ss;
  ss<<s;
  string word;
  while(ss >> word)
  { 
      // cout<<word;
      for(int i=word.length()-1; i>-1; i--)
      {
        cout<<word[i];
        if(i==0) cout<<" ";
      }
      
      
  }

  return 0;
}