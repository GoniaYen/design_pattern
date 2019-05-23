#ifndef __DECORATOR_H__
#define __DECORATOR_H__
#include<iostream>
using namespace std;
class Component
{
  private:
  protected:
    Component();
  public:
    virtual ~Component();
    virtual void operation() = 0;
};

class ConcreteComponent:public Component
{
private:
public:
    ConcreteComponent();
    ~ConcreteComponent();
    void operation();
};
class Decorator:public Component
{
private:
protected:
    Component *_com = nullptr;
public:
    Decorator(Component *com);
    ~Decorator();
    void operation();
};
class ConcreteDecorator:public Decorator
{
private:

public:
    ConcreteDecorator(Component *com);
    ~ConcreteDecorator();
    void operation();
    void AddBeHavior();
};

#endif