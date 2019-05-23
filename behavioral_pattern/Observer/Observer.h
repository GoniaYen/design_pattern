#ifndef __OBSERVER_H__
#define __OBSERVER_H__
#include "Subject.h"
#include <string>
typedef string State;

class Observer
{
private:
protected:
    Observer();
    State _st;

public:
    virtual ~Observer();
    virtual void Update(Subject *sub) = 0;
    virtual void PrintInfo() = 0;
};

class ConcreteObserverA:public Observer
{
private:
   Subject* _sub;
public:
    virtual Subject* GetSubject();
    ConcreteObserverA(Subject* sub);
    virtual ~ConcreteObserverA();
    void Update(Subject *sub) ;
    void PrintInfo() ;
};

class ConcreteObserverB:public Observer
{
private:
   Subject* _sub;
public:
    virtual Subject* GetSubject();
    ConcreteObserverB(Subject* sub);
    virtual ~ConcreteObserverB();
    void Update(Subject *sub) ;
    void PrintInfo() ;
};




#endif