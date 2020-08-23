#include <iostream>
using namespace std;

class Student{
  public:
   int id;
   string name;
   string job;

   void print(int id, string name, string job){
     cout << "Id: " << id  <<", Name: "<< name << ", Student: " << job << endl;
   }
};

int main() {
  Student s1;
  s1.id = 2;
  s1.name = "Rakib Shakib";
  s1.job = "Student & Developer";

  s1.print(s1.id, s1.name, s1.job);
}
