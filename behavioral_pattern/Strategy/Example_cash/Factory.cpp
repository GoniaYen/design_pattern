#include "Factory.h"

Factory::Factory(double mrb)
{
    _moneyRebate = mrb;
}
Factory::Factory(double mc, double mrt)
{
    _moneyCondition = mc;
    _moneyReturn = mrt;
}

Factory::~Factory()
{
}
Cash *Factory::createOperation(int i)
{
    Cash *cs = nullptr;
    switch (i)
    {
    case 1:
        cs = new CashRebate(_moneyRebate);
        break;
    case 2:
        cs = new CashReturn(_moneyCondition, _moneyReturn);
        break;
    default:
        break;
    }
}