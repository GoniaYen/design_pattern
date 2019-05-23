#include "Context.h"
#include "State.h"
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    State* st = new ConcreteStateA();
    Context* con = new Context(st);
    con->OperationInterFace();
    //con->OperationChangState();
    con->OperationInterFace();
    con->OperationInterFace();

    if(con != NULL)
        delete con;
    if(st != NULL)
        st = NULL;
    return 0;
}
