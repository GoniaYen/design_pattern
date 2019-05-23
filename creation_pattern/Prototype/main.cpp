#include <iostream>
#include "ProtoType.h"
using namespace std;

int main(int argc,char* argv[])
{

    ProtoType* p = new ConcreteProtoType();
    ProtoType* p1= p->Clone();
    return 0;
}