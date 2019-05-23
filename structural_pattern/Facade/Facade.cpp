#include <iostream>
#include "Facade.h"
using namespace std;


SubSystem1::SubSystem1(/* args */)
{
}

SubSystem1::~SubSystem1()
{
}
void SubSystem1::Operation()
{
    cout << "System1 Operation()..." << endl;
}


SubSystem2::SubSystem2(/* args */)
{
}

SubSystem2::~SubSystem2()
{
}
void SubSystem2::Operation()
{
    cout << "System2 Operation()..." << endl;
}


Facade::Facade(/* args */)
{
    this->_sub1 = new SubSystem1();
    this->_sub2 = new SubSystem2();
}

Facade::~Facade()
{
    delete _sub1;
    delete _sub2;
}
void Facade::OperationWrapper()
{
    this->_sub1->Operation();
    this->_sub2->Operation();
}