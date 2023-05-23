#include<bits/stdc++.h>
using namespace std;

int main()
{
  // float  *x = new float;
  // *x=99;
  // cout<<*x;

  int *a = new int[6];
  for(int i = 0; i < 6; i++)
  {
    cin >> a[i];
  }

  // for(int i = 0; i < 6; i++)
  // {
  //   cout << a[i] <<" ";
  // }

  int *b = new int[7];
  for(int i = 0; i < 6; i++)
  {
    b[i]=a[i];
  }
  b[6]= 56;

  for(int i = 0; i < 7; i++)
  {
    cout << b[i] << " ";
  }

  return 0;
}