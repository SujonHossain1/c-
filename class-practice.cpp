#include <iostream>
using namespace std;

class Student{
public :
    string name;
    int age;
    string job;

    void printIntroduction(string name, int age, string job){
        cout << "Your Name: " << name << endl;
        cout << " Age: " << age << endl;
        cout << " Job: " << job << endl;
    }
};

int main(){
   Student s1;
   s1.name = "Sujon Hossain";
   s1.age = 21;
   s1.job = "Developer";

   s1.printIntroduction(s1.name, s1.age, s1.job);
}
