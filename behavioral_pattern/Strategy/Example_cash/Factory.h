#include "Cash.h"

class Factory
{
private:
    double _moneyRebate = 0.0;
    double _moneyCondition = 0.0;
    double _moneyReturn = 0.0;
public:
    Factory(double mrb);
    Factory(double mc,double mrt);

    ~Factory();
    Cash* createOperation(int i);
};

