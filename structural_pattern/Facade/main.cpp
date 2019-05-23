#include "Facade.h"
#include <iostream>

int main(int argc, char const *argv[])
{
    Facade *f = new Facade();
    f->OperationWrapper();
    
    return 0;
}
