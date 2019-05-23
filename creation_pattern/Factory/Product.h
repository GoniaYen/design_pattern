#ifndef __PRODUCT_H__
#define __PRODUCT_H__

class Product
{
private:
protected:
    Product();
public:
    virtual ~Product()=0;
};


class ConcreteProduct:public Product
{
private:
    
public:
    ConcreteProduct();
    ~ConcreteProduct();
};

#endif