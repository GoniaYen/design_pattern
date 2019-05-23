#include "Context.h"
#include "State.h"
#include <iostream>
using namespace std;

Context::Context()
{
}
Context::Context(State *state)//初始状态
{
    this->_state = state;
}
Context::~Context()
{
    cout<<"Context::~Context()"<<endl;

    delete _state;
}
void Context::OperationInterFace()
{
    _state->OperationInterface(this);
}
void Context::OperationChangState()
{
    _state->OperationChangeState(this);
}
bool Context::ChangeState(State *state)
{
    this->_state = state;
    return true;
}