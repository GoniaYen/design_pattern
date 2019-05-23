#ifndef __BUILDER_H__
#define __BUILDER_H__
class Person;


class Builder
{
private:
    Person *p = nullptr;
public: 
    Builder();
    virtual ~Builder();
    virtual void buildHead()=0;
    virtual void buildBody()=0;
    virtual void buildLeftArm()=0;
    virtual void buildRightArm()=0;
    virtual void buildLeftLeg()=0;
    virtual void buildRightLeg()=0;
    virtual Person *GetRuslt() = 0;
};
 
class ConcreteBuilder:public Builder
{
private:
    
public:
    ConcreteBuilder();
    ~ConcreteBuilder();
    void buildHead();
    void buildBody();
    void buildLeftArm();
    void buildRightArm();
    void buildLeftLeg();
    void buildRightLeg();
    Person *GetRuslt();
};




#endif