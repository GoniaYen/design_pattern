#include <iostream>
#include "AbstractFactory.h"
#include "Product.h"
using namespace std;

int main(int argc,char* argv[])
{   
    AbstractFactory *af1 = new ConcreteFactory1();
    af1->CreateProductA();
    af1->CreateProductB();
    
    AbstractFactory *af2 = new ConcreteFactory2();
    af2->CreateProductA();
    af2->CreateProductB();

    delete af1;
    delete af2;


    return 0;
}