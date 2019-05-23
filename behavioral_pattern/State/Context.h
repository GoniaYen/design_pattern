#ifndef __CONTEXT_H__
#define __CONTEXT_H__
class State;
class Context
{
private:
    State *_state;
    friend class State;//将State设置为友元是为了　访问bool ChangeState(State *state);。
    bool ChangeState(State *state);

public:
    Context();
    Context(State *state);

    ~Context();
    void OperationInterFace();
    void OperationChangState();
};


#endif