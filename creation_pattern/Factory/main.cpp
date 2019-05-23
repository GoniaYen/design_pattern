#include "Product.h"
#include "Factory.h"
using namespace std;
int main(int grac,char* argv[])
{
    Factory *fac = new ConcreteFactory();
    Product *p = fac->CreateProduct();
    delete fac;
    delete p;
    return 0;
}