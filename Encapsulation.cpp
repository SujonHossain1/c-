#include <iostream>
using namespace std;

class Student{

  private:
  int phoneNumber;

  public:
  int id;
  string name;

  Student(int i, string n){
    id = i;
    name = n;
  }

  void printInformationStudent(int id, string name) {
    cout << "Student id: " << id << endl;
    cout << "Stuent Name: " << name << endl;
   }


   void SetNumber(int setPhoneNumber){
     phoneNumber = setPhoneNumber;
   }

   int getNumber(){
     return phoneNumber;
   }

};

int main(){
  Student student1(160, "Sujon Hossain");

  student1.printInformationStudent(student1.id, student1.name);
  student1.SetNumber(1960653626);

  int studentNumber = student1.getNumber();
  cout << "Student Number: " << studentNumber << endl;
}
