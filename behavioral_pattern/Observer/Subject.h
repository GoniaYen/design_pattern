#ifndef __SUBJECT_H__
#define __SUBJECT_H__
#include <list>
#include <string>
using namespace std;
typedef string State;
class Observer;
class Subject
{
private:
    list<Observer *> *_obvs;

protected:
    Subject();

public:
    virtual ~Subject();
    virtual void Attach(Observer *obv);
    virtual void Detach(Observer *obv);
    virtual void Notify();
    virtual void SetState(const State &st) = 0;
    virtual State GetState() = 0;
};

class ConcreteSubject : public Subject
{
private:
    State _st;

public:
    ConcreteSubject();
    ~ConcreteSubject();
    void SetState(const State &st);
    State GetState();
};

#endif