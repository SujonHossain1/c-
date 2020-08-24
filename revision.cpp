/**
 * In C++ Three type of data
 *  1: Primary Data type: Integer, Character, String, Boolean, Floating point, Double Floating point, void 
 *  2: Derived Data type: Function, Array, Pointer, Reference
 *  3: User Defined type: Class, Structure, Union, Enum, Typeof
 */

#include <iostream>
#include <string>
using namespace std;

int main(){

    // Primary Data Type: => below
    // Variable decration: data_type variable_name = value;

    int my_age = 21; // integer 
    char character = 'A'; // character 
    string your_name  = "Sujon Hossain"; // string
    bool is_good_bye = true; // boolean
    float number_1 = 160.5; // float => float has 7 decimal digits of precision.
    double number_2 = 160.555; // double => 15 decimal digits of precision


    cout << "Integer: " << my_age << endl;
    cout << "Character: " << character << endl;
    cout << "String: " << your_name << endl; 
    cout << "Boolean: " << is_good_bye << endl;
    cout << "Float: " << number_1 << endl;
    cout << "Double: " << number_2 << endl << endl;

   /* Data    TypeSize     Description
     int	 4 bytes	   Stores whole numbers, without decimals
     float	 4 bytes	   Stores fractional numbers, containing one or more decimals. Sufficient for storing 7 decimal digits
     double	 8 bytes 	   Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits
     boolean 1 byte	       Stores true or false values
     char	 1 byte	       Stores a single character/letter/number, or ASCII values
     */



    
}