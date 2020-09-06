#include<iostream>
using namespace std;
class Person
{
protected:
    string name; // 

public:
    int age;
    Person()
    {
        cout<<"person constructor called"<<endl;
    }
    Person(string name)
    {
        this->name = name;
    }
    void setName(string name)  //public
    {
        this->name = name;
    }
    ~Person()
    {
        cout<<"person destructor called"<<endl;
    }
};

class Student: public Person
{
public:
    Student()
    {
        cout<<"student constructor called"<<endl;
    }
    Student(string name)
    {
        this->name = name;

    }
    Person::setName;
    void displayName()
    {
        cout<<"Your name is "<<name<<endl;
    }
    ~Student()
    {
        cout<<"student destructor called"<<endl;
    }
};

int main()
{
    Student st1;
    st1.setName("mahbub");
    st1.displayName();
    return 0;
}