#include <iostream>
#include <string>
using namespace std;

class Student{
  public:
  int id;
  string name;
  string job;
};

int main(){
  Student s1;

  s1.id = 160;
  s1.name = "Sujon Hossain";
  s1.job = "Student & Developer";

  cout << "Frist Student" << endl;
  cout << "Name: " << s1.name << " id: " << s1.id << endl;
  cout << "Job: " << s1.job;




}
