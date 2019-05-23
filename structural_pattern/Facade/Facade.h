#ifndef __FACADE_H__
#define __FACADE_H__
class SubSystem1
{
private:
    /* data */
public:
    SubSystem1(/* args */);
    ~SubSystem1();
    void Operation();
};

class SubSystem2
{
private:
    /* data */
public:
    SubSystem2(/* args */);
    ~SubSystem2();
    void Operation();
};

class Facade
{
private:
    SubSystem1 *_sub1;
    SubSystem2 *_sub2;

public:
    Facade(/* args */);
    ~Facade();
    void OperationWrapper();
};


#endif
