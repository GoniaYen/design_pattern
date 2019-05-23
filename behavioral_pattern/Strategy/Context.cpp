#include "Context.h"

Context::Context(Strategy *stg)
{
    _stg = stg;
}

Context::~Context()
{
    if (!_stg)
    {
        delete _stg;
    }
}
void Context::do_action()
{
    _stg->AlgorithmInterface();
}
