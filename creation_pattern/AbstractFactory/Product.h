#ifndef __PRODUCT_H__
#define __PRODUCT_H__

class AbstractProductA
{
  private:
  public:
    virtual ~AbstractProductA();
  protected:
    AbstractProductA();
};

class AbstractProductB
{
  private:
  public:
    virtual ~AbstractProductB();
  protected:
    AbstractProductB();
};

class ProductA1:public AbstractProductA
{
private:
    
public:
    ProductA1();
    ~ProductA1();
};
class ProductA2:public AbstractProductA
{
private:
    
public:
    ProductA2();
    ~ProductA2();
};

class ProductB1:public AbstractProductB
{
private:
public:
    ProductB1();
    ~ProductB1();
};

class ProductB2:public AbstractProductB
{
private:
   
public:
    ProductB2();
    ~ProductB2();
};





#endif