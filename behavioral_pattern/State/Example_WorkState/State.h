#ifndef __STATE_H__
#define __STATE_H__
#include "Work.h"
class Work;
class State
{
private:
public:
    State();
    virtual ~State();
    virtual void OperationInterface(Work *w) = 0;
    virtual void OperationChangeState(Work *) = 0;
    bool ChangeState(Work *w, State *st);
};

class ForenoonState : public State
{
private:
public:
    ForenoonState();
    virtual ~ForenoonState();
    virtual void OperationInterface(Work *);
    virtual void OperationChangeState(Work *);
};

class NoonState : public State
{
private:
public:
    NoonState();
    virtual ~NoonState();
    virtual void OperationInterface(Work *);
    virtual void OperationChangeState(Work *);
};

class AfternoonState : public State
{
private:
public:
    AfternoonState();
    virtual ~AfternoonState();
    virtual void OperationInterface(Work *);
    virtual void OperationChangeState(Work *);
};
class EveningState : public State
{
private:
public:
    EveningState();
    virtual ~EveningState();
    virtual void OperationInterface(Work *);
    virtual void OperationChangeState(Work *);
};
class SleepState : public State
{
private:
public:
    SleepState();
    virtual ~SleepState();
    virtual void OperationInterface(Work *);
    virtual void OperationChangeState(Work *);
};
class RestState : public State
{
private:
public:
    RestState();
    virtual ~RestState();
    virtual void OperationInterface(Work *);
    virtual void OperationChangeState(Work *);
};
#endif