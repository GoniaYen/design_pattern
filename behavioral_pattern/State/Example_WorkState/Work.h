#ifndef __CONTEXT_H__
#define __CONTEXT_H__
class State;
class Work
{
private:
    State *_state;
    bool finish = false;
    double hour;
    friend class State;//将State设置为友元是为了　访问bool ChangeState(State *state);。
    bool ChangeState(State *state);

public:
    Work();
    Work(State *state);
    ~Work();
    void setHour(double h);
    double getHour();
    void setFinish(bool bl);
    bool getFinish();
    void OperationInterFace();
    void OperationChangState();
};


#endif