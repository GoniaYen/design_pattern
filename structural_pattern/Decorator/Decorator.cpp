#include "Decorator.h"
#include <iostream>
using namespace std;
Component::Component()
{
    cout << "component..." << endl;
}
Component::~Component()
{
    cout << "~component..." << endl;
}
ConcreteComponent::ConcreteComponent()
{
    cout << "ConcreteComponent..." << endl;
}
ConcreteComponent::~ConcreteComponent()
{
    cout << "~ConcreteComponent..." << endl;
}
void ConcreteComponent::operation()
{
    cout << "ConcreteComponent operation()" << endl;
}
Decorator::Decorator(Component *com)
{
    _com = com;
    cout << "Decorator" << endl;
}
Decorator::~Decorator()
{
   
    
     
    cout << "~Decorator" << endl;
}
void Decorator::operation()
{
    cout << "Decorator operation..." << endl;
}

ConcreteDecorator::ConcreteDecorator(Component *com) : Decorator(com)
{
    cout << "ConcreteDecorator..." << endl;
}
ConcreteDecorator::~ConcreteDecorator()
{
    cout << "~ConcreteDecorator" << endl;
}
void ConcreteDecorator::operation()
{
    _com->operation();
    this->AddBeHavior();
    cout << "ConcreteDecorator operation..." << endl;
}
void ConcreteDecorator::AddBeHavior()
{
    cout << "ConcreteDecorator AddBeHavior..." << endl;
}
