
#include <iostream>
#include <string>
using namespace std;

int main () {
  string firstName = "Sujon";
  string lastName = "Hossain";
  const string fullName = firstName.append(lastName);

  cout << fullName;
  return 0;
}
