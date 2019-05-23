#include "Builder.h"
#include "Product.h"
#include <iostream>

using namespace std;

Builder::Builder()
{
}
Builder::~Builder()
{
}


ConcreteBuilder::ConcreteBuilder()
{
}
ConcreteBuilder::~ConcreteBuilder()
{
}
void ConcreteBuilder::BuildPartA(const string &BuildPara)
{
    cout << "step1:BuildPartA..." << BuildPara << endl;
}
void ConcreteBuilder::BuildPartB(const string &BuildPara)
{
    cout << "step1:BuildPartB..." << BuildPara << endl;
}
void ConcreteBuilder::BuildPartC(const string &BuildPara)
{
    cout << "step1:BuildPartC..." << BuildPara << endl;
}
Product* ConcreteBuilder::GetRuslt()
{
    BuildPartA("pre_defined");
    BuildPartB("pre_defined");
    BuildPartC("pre_defined");
    return new Product();
}