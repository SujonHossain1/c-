#include <iostream>
using namespace std;

class Pen
{
public: 
    bool isHead; // property
    bool have_point;
    string color;

    string print(string color) // method
    {
        return   color;
    }
};

int main()
{ // data_type variable_name;
    // int number;
    Pen p1;
    p1.isHead = false;
    p1.have_point = true;
    p1.color = "blue";
   
  string color =  p1.print(p1.color);
  
  cout << color;
//   string color =  p1.print();

//   cout << color <<endl;

    Pen p2;

    p2.isHead = true;
    p2.have_point = true;
    p2.color = "deeppink";
}
