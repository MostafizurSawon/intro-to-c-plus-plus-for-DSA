#include<bits/stdc++.h>
using namespace std;

class Cricketer
{
  public:
    int jersey_no;
    char country[20];
};

int main()
{
  char c[20]="India";
  Cricketer* dhoni = new Cricketer();
  dhoni->jersey_no = 7;
  strcpy(dhoni->country,c);
  // cout << "Country: "<<dhoni->country<<endl<<"Jersey No: "<< dhoni->jersey_no;

  Cricketer* kohli= new Cricketer();
  // kohli=dhoni;
  strcpy(kohli->country,dhoni->country);
  kohli->jersey_no=dhoni->jersey_no;
  
  delete dhoni;

  cout << "Country: "<<kohli->country<<endl<<"Jersey No: "<< kohli->jersey_no;


  return 0;
}