#include "Person.h"
#include <iostream>
using namespace std;

Person::Person()
{
}
Person::Person(string name)
{
    _name = name;
}

Person::~Person()
{
    
}
void Person::show()
{
    cout<<"装扮的"<<_name;
}
Finery::Finery()
{
    
}
void Finery::Decorate(Person *person)
{
    _person = person;
}
Finery::~Finery()
{
    
}
void Finery::show()
{
    if(_person!=NULL){
        _person->show();
    }
}
TShirts::TShirts()
{
}

TShirts::~TShirts()
{
}
void TShirts::show()
{
    cout<<"Ｔ恤　";
   Finery::show();
}
BigTrouser::BigTrouser(/* args */)
{
}

BigTrouser::~BigTrouser()
{
}
void BigTrouser::show()
{
    cout<<"垮裤 ";
    Finery::show();
}
 Sneaker:: Sneaker(/* args */)
{
}

 Sneaker::~ Sneaker()
{
}
void  Sneaker::show()
{
    cout<<"球鞋　";
    Finery::show();
}

