#include "Builder.h"
#include "Director.h"

Director:: Director(Builder *bld)
{
    _bld=bld;
}
Director::~Director()
{

}
void Director::Construct()
{
    _bld->BuildPartA("user_defined");
    _bld->BuildPartB("user_defined");
    _bld->BuildPartC("user_defined");
}
