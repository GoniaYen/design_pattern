#include "Template.h"


AbstractClass::AbstractClass(/* args */)
{
}

AbstractClass::~AbstractClass()
{
}
void AbstractClass::template_method()
{
    this->primitive_operation1();
    this->primitive_operation2();
}

ConcreteClass1::ConcreteClass1(/* args */)
{
}

ConcreteClass1::~ConcreteClass1()
{
}
void ConcreteClass1::primitive_operation1()
{
    cout<<"ConcreteClass1::primitive_operation1()"<<endl;
}
void ConcreteClass1::primitive_operation2()
{
    cout<<"ConcreteClass1::primitive_operation2()"<<endl;
}

ConcreteClass2::ConcreteClass2(/* args */)
{
}

ConcreteClass2::~ConcreteClass2()
{
}
void ConcreteClass2::primitive_operation1()
{
    cout<<"ConcreteClass2::primitive_operation1()"<<endl;
}
void ConcreteClass2::primitive_operation2()
{
    cout<<"ConcreteClass2::primitive_operation2()"<<endl;
}



