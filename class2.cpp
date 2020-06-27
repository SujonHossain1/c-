#include <iostream>
using namespace std;

class Student{
  public:
   int id;
   string name;
   string job;

   void print(int id, string name, string job){
     cout << "Id: " << id  <<", Name: "<< name << ", Stuent: " << job << endl;
   }
};

int main() {
  Student s1;
  s1.id = 2;
  s1.name = "Rakib Shakib";
  s1.job = "Student & Developer";

  Student s2;
  s2.id = 30;
  s2.name = "Sadia Apu";
  s2.job = "Student";

  s1.print(s1.id, s1.name, s1.job);
  s2.print(s2.id, s2.name, s2.job);
}
