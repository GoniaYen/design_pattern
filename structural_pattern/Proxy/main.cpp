#include "Proxy.h"
#include <iostream>
using namespace std;

int main(int agrc,char **argv)
{
    Subject *sub = new ConcreteSubject();
    Proxy *p = new Proxy(sub);

    p->Request();


    delete sub;
    delete p;

    return 0;
}