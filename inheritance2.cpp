#include<iostream>
using namespace std;
class Father
{
public:
    string skinColor;
    void replyFromFather()
    {
        cout<<"Tomar baba bolchi, ki lagbe?"<<endl;
    }
};
class Mother
{
public:
    string voiceType;
    void replyFromMother()
    {
        cout<<"Tomar ammu bolchi, ki lagbe?"<<endl;
    }
};


class Child: public Father, public Mother
{
public:
    void display()
    {
        cout<<"skin color: "<<skinColor<<" Voice type: "<<voiceType<<endl;
    }
};

int main()
{
    Child ch1;
    ch1.skinColor = "fair";
    ch1.voiceType = "mild";
    ch1.display();
    ch1.replyFromFather();
    ch1.replyFromMother();
    return 0;
}