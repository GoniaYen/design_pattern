#include "Decorator.h"
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    Component *p = new ConcreteComponent();

    Decorator *d = new ConcreteDecorator(p);

    d->operation();
    if (NULL != d)
    {
        delete d;
    }

    if (NULL != p)
    {
        delete p;
    }

    return 0;
}