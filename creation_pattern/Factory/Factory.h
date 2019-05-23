#ifndef __FACTORY_H__
#define __FACTORY_H__

class Product;

class Factory
{
private:

protected:
    Factory(/* args */);
public:
    virtual ~Factory()=0;
    virtual Product* CreateProduct()=0;
};

class ConcreteFactory:public Factory
{
private:
    /* data */
public:
    ConcreteFactory();
    ~ConcreteFactory();
    Product* CreateProduct();
};







#endif