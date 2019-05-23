#ifndef __STATE_H__
#define __STATE_H__
#include "Context.h"
class Context;
class State
{
private:
    
public:
    State();
    virtual ~State();
    virtual void OperationInterface(Context *con) = 0;
    virtual void OperationChangeState(Context *con) = 0;
    bool ChangeState(Context *con, State *st);
};

class ConcreteStateA : public State
{
private:
   
public:
    ConcreteStateA();
    virtual ~ConcreteStateA();
    virtual void OperationInterface(Context *);
    virtual void OperationChangeState(Context *);
};

class ConcreteStateB : public State
{
private:
  
public:
    ConcreteStateB();
    virtual ~ConcreteStateB();
    virtual void OperationInterface(Context *);
    virtual void OperationChangeState(Context *);
};


#endif