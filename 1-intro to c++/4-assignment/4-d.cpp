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
  char name1[100]="Md Mostafizur Rahman";
  char name2[100]="Suman Biswas";
  Person *sawon = new Person(name1, 5.11, 24);
  Person *sumon = new Person(name2, 5.7, 23);

  if(sawon->age>sumon->age) cout << sawon->name << endl;
  else cout << sumon->name << endl;

  return 0;
}


 

// Create two objects of the Person class from question 2-c and initialize them with proper value. Now compare whose age is greater, and print his/her name.