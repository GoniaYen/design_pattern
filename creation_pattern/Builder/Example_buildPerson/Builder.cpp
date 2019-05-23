#include "Builder.h"
#include "Person.h"
#include <iostream>
using namespace std;
Builder::Builder()
{
}

Builder::~Builder()
{
}

ConcreteBuilder::ConcreteBuilder(/* args */)
{
}

ConcreteBuilder::~ConcreteBuilder()
{
}

void ConcreteBuilder::buildHead()
{
    cout << "build head " << endl;
}
void ConcreteBuilder::buildBody()
{

    cout << "build Body " << endl;
}
void ConcreteBuilder::buildLeftArm()
{
    cout << "build LeftArm " << endl;
}

void ConcreteBuilder::buildRightArm()
{
    cout << "build RightArm " << endl;
}
void ConcreteBuilder::buildLeftLeg()
{
    cout << "build LeftLeg " << endl;
}

void ConcreteBuilder::buildRightLeg()
{
    cout << "build RightLeg " << endl;
}
Person *ConcreteBuilder::GetRuslt()
{
    buildHead();
    buildBody();
    buildLeftArm();
    buildRightArm();
    buildLeftLeg();
    buildRightLeg();
    return new Person();
}7