#include <iostream>
#include "Element.h"
#include "Visitor.h"

using namespace std;
Visitor::Visitor()
{
}

Visitor::~Visitor()
{
}

ConcreteVisitorA::ConcreteVisitorA()
{
}
ConcreteVisitorA::~ConcreteVisitorA()
{
}
void ConcreteVisitorA::VisitConcreteElementA(Element *elm)
{
    cout << "I am  ConcreteVisitorA,I will visit ConcreteElementA " << endl;
}
void ConcreteVisitorA::VisitConcreteElementB(Element *elm)
{
    cout << "I am  ConcreteVisitorA,I will visit ConcreteElementA " << endl;
}

ConcreteVisitorB::ConcreteVisitorB()
{
}
ConcreteVisitorB::~ConcreteVisitorB()
{
}
void ConcreteVisitorB::VisitConcreteElementA(Element *elm)
{
    cout << "I am  ConcreteVisitorB,I will visit ConcreteElementA " << endl;
}
void ConcreteVisitorB::VisitConcreteElementB(Element *elm)
{
    cout << "I am  ConcreteVisitorB,I will visit ConcreteElementA " << endl;
}
