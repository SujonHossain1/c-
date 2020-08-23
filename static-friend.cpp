#include <iostream>
using namespace std;

class Person{
    public:
        string name;
        int age;
        string job;

        Person(string name = "unnamed", int age = 0, string job = "null"){
            this->name = name;
            this->age = age;
            this->job = job;
        }
         displayInformation(){
            cout << "Your Name: " << name << " Age: " << age << " Job: " << job << endl <<endl;
        }


};


/* Car Class using Constructor and friend function */
class Car{
    private:
        string carName;
        string carModel;
        int  carPrice;
    public:
        Car(string carName, string carModel, int carPrice){
            this->carName = carName;
            this->carModel = carModel;
            this->carPrice = carPrice;
        }
        friend void carInformation(Car);


};
// friend function declaration
 void carInformation(Car obj){
          cout << "Car Name: " << obj.carName <<endl;
          cout << "Car Model " << obj.carModel <<endl;
          cout << "Car Price " << obj.carPrice <<endl;
}

int main(){
    // Person class using
    Person obj("Sujon Hossain", 21, "Developer & Student");
    obj.displayInformation();

    // Car class using
    Car newCar("BMW", "W3R5", 200000);
    carInformation(newCar);

}
