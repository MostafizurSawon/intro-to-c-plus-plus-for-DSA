#include<bits/stdc++.h>
using namespace std;

int *fun()
{
  int *a=new int[6];
  for(int i = 0; i < 6; i++)
  {
    cin >> a[i];
  }
  return a;
}

int main()
{
  int *a=fun();
  for(int i = 0; i < 6; i++)
  {
    cout << a[i]<<" ";
  }

  return 0;
}