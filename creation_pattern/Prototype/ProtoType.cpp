#include <iostream>
#include "ProtoType.h"
using namespace std;

ProtoType::ProtoType()
{
}

ProtoType::~ProtoType()
{
}

ConcreteProtoType::ConcreteProtoType(/* args */)
{
}
ConcreteProtoType::ConcreteProtoType(const ConcreteProtoType& cp)
{
    cout<<"ConcreteProtoType Copy..."<<endl;
}


ConcreteProtoType::~ConcreteProtoType()
{
}
ProtoType* ConcreteProtoType::Clone()const
{
    return new ConcreteProtoType(*this);
}

