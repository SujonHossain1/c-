#include <iostream>
using namespace std;

class Person{
    public:
    int x;
    static int age;

    Person(){

        cout << " Object : " << ++age << endl;
    }

};

 int Person::age;

int main(){

  Person p1;
  Person p2;
}
