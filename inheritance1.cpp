/**
 * Defination: Inheritance is one of the feature of Object Oriented Programming System(OOPs), it allows the child class to acquire the properties (the data members) and functionality (the member functions) of parent class.
 * 
 * 
 * 
    Syntax of Inheritance: 
    class parent_class
    {
        //Body of parent class
    };
    class child_class : access_modifier parent_class
    {
    //Body of child class
    };

*/

// Example: 1

#include <iostream>
using namespace std;
class Teacher
{
public:
    string varsity = "ISTT";
    Teacher()
    {
        cout << "Hey Guys, I am a teacher" << endl;
    }
};
//This class inherits Teacher class
class MathTeacher : public Teacher
{
public:
    string mainSub = "Math";
    string name = "Negan";

    MathTeacher()
    {
        cout << "I am a Math Teacher" << endl;
    }
};

int main()
{
    MathTeacher obj;
    cout << "Name: " << obj.name << endl;
    cout << "College Name: " << obj.varsit << endl;
    cout << "Main Subject: " << obj.mainSub << endl;
    return 0;
}

/**
 * Type of Inheritance: 
 * Types of Inheritance in C++
    1) Single inheritance
    2) Multilevel inheritance
    3) Multiple inheritance
    4) Hierarchical inheritance
    5) Hybrid inheritance
 * 
 * */


/* Single inheritance
In Single inheritance one class inherits one class exactly.
For example: Lets say we have class A and B */


class Moblie {
    int ram;
    int rom;
    string processor;
    int display;

    
};