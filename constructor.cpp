#include <iostream>
using namespace std;

class Love{
  public :
  string loveName;
  string yourName;
  bool propose;
  bool lipTogether;

  Love(string yn, string ln,  bool p, bool lt){
    loveName = yn;
    yourName = ln;
    propose = p;
    lipTogether = lt;
  }

  void print(string loveName,string yourName, bool propose, bool lipTogether){
    if(propose == true && lipTogether == true){
      cout << "Mr. " << yourName << " Mis. " << loveName  << "  prem a tara serious" << endl;
    }else if(propose == true || lipTogether == true){
       cout << "Mr. " << yourName << " Mis. " << loveName  << " bhai try to continue" << endl;
    }else{
      cout << "Mr. " << yourName << " Mis. " << loveName  << " ar Prem a daga" << endl;
    }
  }

};

int main() {
  Love love1("Abul", "Karina", false, false);

  love1.print(love1.yourName, love1.loveName, love1.propose, love1.lipTogether);
}
