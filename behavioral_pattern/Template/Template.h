#ifndef __TEMPLATE_H__
#define __TEMPLATE_H__
#include <iostream>
using namespace std;

class AbstractClass
{
  private:
  protected:
    AbstractClass();
    virtual void primitive_operation1() = 0;
    virtual void primitive_operation2() = 0;

  public:
    void template_method();
    ~AbstractClass();
};

class ConcreteClass1 : public AbstractClass
{
  private:
    /* data */
  public:
    ConcreteClass1(/* args */);
    ~ConcreteClass1();
    void primitive_operation1();
    void primitive_operation2();
};
class ConcreteClass2 : public AbstractClass
{
  private:
    /* data */
  public:
    ConcreteClass2(/* args */);
    ~ConcreteClass2();
    void primitive_operation1();
    void primitive_operation2();
};



#endif