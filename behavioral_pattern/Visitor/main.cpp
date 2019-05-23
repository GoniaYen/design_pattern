#include "Element.h"
#include "Visitor.h"

int main(int argc, char const *argv[])
{
    Visitor* vis = new ConcreteVisitorA();
    Element* elm = new ConcreteElementA();
    elm->Accept(vis);
    delete vis;
    delete elm;
    return 0;
}
