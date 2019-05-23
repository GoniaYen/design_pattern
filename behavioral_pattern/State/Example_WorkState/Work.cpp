#include "Work.h"
#include "State.h"
#include <iostream>
using namespace std;

Work::Work()
{
    this->_state = new ForenoonState();
}
Work::Work(State *state) //初始状态
{
    this->_state = state;
}
Work::~Work()
{
    cout << "Work::~Work()" << endl;

    delete _state;
}
void Work::OperationInterFace()
{
    _state->OperationInterface(this);
}
void Work::OperationChangState()
{
    _state->OperationChangeState(this);
}
bool Work::ChangeState(State *state)
{
    this->_state = state;
    return true;
}
void Work::setHour(double h){
    hour =h;
}
double Work::getHour(){
    return hour;
}
void Work::setFinish(bool bl){
    finish = bl;
}
bool Work::getFinish(){
    return finish;
}