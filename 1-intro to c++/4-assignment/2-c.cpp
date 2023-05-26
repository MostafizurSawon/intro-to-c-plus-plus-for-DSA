#include<bits/stdc++.h>
using namespace std;

class Person
{
  public:
    char name[100];
    float height;
    int age;

    Person(char *na, float h, int a)
    {
      age=a;
      height = h;
      strcpy(name, na);
    }
};

int main()
{
  char name[100]="Md Mostafizur Rahman";
  Person *sawon = new Person(name, 5.11, 25);


  cout<<"Name: "<<sawon->name<<endl<<"Height: "<<sawon->height<<endl<<"Age: "<<sawon->age<<endl;


  delete sawon;

  cout<<"Name: "<<sawon->name<<endl<<"Height: "<<sawon->height<<endl<<"Age: "<<sawon->age<<endl;

  return 0;
}



// Create a class named Person where the class will have properties name(string), height(float) and age(int). Make a constructor and create a dynamic object of that class and finally pass proper values using the constructor. 

