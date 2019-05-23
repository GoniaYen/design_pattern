#ifndef __FACTORY_H__
#define __FACTORY_H__

class operation;
class factory
{
  private:
  protected:
    factory();

  public:
    virtual operation *create_operation() = 0;
    ~factory();
};

//create_operation_add
class create_operation_add:public factory
{
private:
    /* data */
public:
    create_operation_add(/* args */);
    ~create_operation_add();
    operation *create_operation();
};
//create_operation_sub
class create_operation_sub:public factory
{
private:
    /* data */
public:
    create_operation_sub(/* args */);
    ~create_operation_sub();
    operation *create_operation();
};
//create_operation_mul
class create_operation_mul:public factory
{
private:
    /* data */
public:
    create_operation_mul(/* args */);
    ~create_operation_mul();
    operation *create_operation();
};
//create_operation_div
class create_operation_div:public factory
{
private:
    /* data */
public:
    create_operation_div(/* args */);
    ~create_operation_div();
    operation *create_operation();
};

#endif
