#include "Element.h"
#include "Visitor.h"
#include <iostream>


using namespace std;

Element::~Element()
{
}

Element::Element()
{
}

ConcreteElementA::ConcreteElementA()
{
}
ConcreteElementA::~ConcreteElementA()
{
}
void ConcreteElementA::Accept(Visitor *vis)
{
    vis->VisitConcreteElementA(this);
    cout<<" visit VisitConcreteElementA"<<endl;
}

ConcreteElementB::ConcreteElementB()
{
}
ConcreteElementB::~ConcreteElementB()
{
}
void ConcreteElementB::Accept(Visitor *vis)
{
    vis->VisitConcreteElementB(this);
    cout<<" visit VisitConcreteElementB"<<endl;
}
