
#include <iostream>
using namespace std;

/*class House
{
public:
    string property_name;
    string branch_in_dhaka;
    int total_branch;
    int floor;

    // void displayInformation()
    // {
    //     cout << "Property Name: " << property_name << endl;
    //     cout << "Branch in Dhaka: " << branch_in_dhaka << endl;
    //     cout << "Total branch: " << total_branch << endl;
    //     cout << "Floor: " << floor << endl;
    // }

    House(string pn, string bid, int tb, int f){
        this->property_name = pn;
        this->branch_in_dhaka = bid;
        this->total_branch = tb;
        this->floor = f;
    }
    void displayInformation()
    {
        cout << "Property Name: " << property_name << endl;
        cout << "Branch in Dhaka: " << branch_in_dhaka << endl;
        cout << "Total branch: " << total_branch << endl;
        cout << "Floor: " << floor << endl;
    }
}; */

class Person
{
public:
    string name;
    int age;

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person
{
public:
    int id;
    void display2()
    {
        cout << "Id :" << id << endl;
        display();
    }
};

int main()
{

    Student s1;
    s1.id = 6;
    s1.name = "Sujon Hossain",
    s1.age = 21;

    s1.display2();
}