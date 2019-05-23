#ifndef __PERSON_H__
#define __PERSON_H__
#include <string>
#include <iostream>
using namespace std;
class Person
{
  private:
    string _name;
  protected:
    Person();
  public:
    Person(string name);
    ~Person();
    virtual void show();
};
class Finery : public Person
{
  private:
  protected:
  Finery();

    Person *_person = NULL;
  public:
    void Decorate(Person *person);
    ~Finery();
    void show();
};

class TShirts:public Finery
{
private:
    
public:
    TShirts();
    ~TShirts();
    void show();
};

class BigTrouser:public Finery
{
private:
    
public:
    BigTrouser();
    ~BigTrouser();
    void show();
};

class  Sneaker:public Finery
{
private:
public:
     Sneaker();
    ~ Sneaker();
    void show();
};




#endif