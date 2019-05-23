#include <iostream>
#include "Proxy.h"

using namespace std;

Subject::Subject()
{
}
Subject::~Subject()
{
}

//++++++++++

ConcreteSubject::ConcreteSubject()
{

}
ConcreteSubject::~ConcreteSubject()
{

}
void ConcreteSubject::Request()
{
    cout<<" ConcreteSubject::Request()..."<<endl;
}
//++++++++++

Proxy::Proxy(/* args */)
{
}

Proxy::~Proxy()
{
    //delete _p;
}
Proxy::Proxy(Subject *p)
{
    _p = p;
}
void Proxy::Request()
{
    cout<<" Proxy::Request()..."<<endl;
    _p->Request();

}

