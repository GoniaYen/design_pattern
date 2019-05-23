#ifndef __ABSTRACTFACTORY_H__
#define __ABSTRACTFACTORY_H__
class AbstractProductA;
class AbstractProductB;

class AbstractFactory
{
  private:
    /* data */
  public:
    virtual ~AbstractFactory();
    virtual AbstractProductA *CreateProductA() = 0;
    virtual AbstractProductB *CreateProductB() = 0;

  protected:
    AbstractFactory();
};
class ConcreteFactory1 : public AbstractFactory
{
  private:
    /* data */
  public:
    ConcreteFactory1(/* args */);
    ~ConcreteFactory1();
    AbstractProductA *CreateProductA();
    AbstractProductB *CreateProductB();
};
class ConcreteFactory2 : public AbstractFactory
{
  private:
    /* data */
  public:
    ConcreteFactory2(/* args */);
    ~ConcreteFactory2();
    AbstractProductA *CreateProductA();
    AbstractProductB *CreateProductB();
};



#endif