#include<bits/stdc++.h>
using namespace std;

int main()
{
  char n;
  cin >> n;
  if(n>='a' && n<='z')
  {
    cout << "ALPHA" << endl<<"IS SMALL";
  }
  else if(n>='A' && n<='Z')
  {
    cout << "ALPHA" << endl<<"IS CAPITAL";
  }
  else
  {
    cout<<"IS DIGIT";
  }

  return 0;
}