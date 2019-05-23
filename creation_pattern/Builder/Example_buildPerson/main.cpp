#include<iostream>
#include "Direct.h"
#include"Builder.h"
#include "Person.h"

int main(int argc,char *argv[])
{
    Direct* d = new Direct(new ConcreteBuilder());
    d->construct();
    return 0;
}