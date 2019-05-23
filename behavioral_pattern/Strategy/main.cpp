#include "Context.h"
#include "Strategy.h"
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    Strategy *s;
    s = new ConcreteStrategyB();
    Context *c;
    c = new Context(s);
    c->do_action();

    if (nullptr != s)
    {
        delete s;
    }

    if (nullptr != c)
    {
        delete c;
    }

    return 0;
}