#include<bits/stdc++.h>
using namespace std;

class Mobile
{
  public:
    string name;
    int release_year;
    int ram;
    int rom;
    int android_version;
    string processore;

    Mobile(string nm,int rd,int rm,int rmm,int av,string p)
    {
      name = nm;
      release_year = rd;
      ram = rm;
      rom = rmm;
      android_version = av;
      processore = p;
    }

    void print()
    {
      cout << "Model Name: " << name << endl;
      cout << "Release year: " << release_year << endl;
      cout << "Android Version: " << android_version << endl;
      cout << "Processor: " << processore << endl;
      cout << "Ram: " << ram << " GB"<< endl;
      cout << "Rom: " << rom << " GB"<< endl;
    }

    int ramrom()
    {
      return ram+rom;
    }


};

int main()
{
  Mobile s10("Samsung galaxy s10+", 2018, 8, 128, 10, "Snapdragon 855");
  s10.print();
  cout<<s10.ramrom();

  return 0;
}