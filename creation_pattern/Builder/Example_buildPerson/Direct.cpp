#include "Builder.h"
#include "Direct.h"

Direct::Direct(Builder *bld)
{
    _bld = bld;
}

Direct::~Direct()
{
}
void Direct::construct()
{
    _bld->buildHead();
    _bld->buildBody();
    _bld->buildLeftArm();
    _bld->buildRightArm();
    _bld->buildLeftLeg();
    _bld->buildRightLeg();
}
