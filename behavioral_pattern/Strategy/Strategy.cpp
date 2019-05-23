#include "Strategy.h"
#include <iostream>

using namespace std;

Strategy::Strategy(/* args */)
{
    cout << "Strategy...." << endl;
}

Strategy::~Strategy()
{
    cout << "~Strategy...." << endl;
}

ConcreteStrategyA::ConcreteStrategyA(/* args */)
{
    cout << "ConcreteStrategyA..." << endl;
}

ConcreteStrategyA::~ConcreteStrategyA()
{
    cout << "~ConcreteStrategyA..." << endl;
}
void ConcreteStrategyA::AlgorithmInterface()
{
    cout << "ConcreteStrategyA AlgorithmInterface()" << endl;
}




ConcreteStrategyB::ConcreteStrategyB(/* args */)
{
    cout << "ConcreteStrategyB..." << endl;
}

ConcreteStrategyB::~ConcreteStrategyB()
{
    cout << "~ConcreteStrategyB..." << endl;
}
void ConcreteStrategyB::AlgorithmInterface()
{
    cout << "ConcreteStrategyB AlgorithmInterface()" << endl;
}