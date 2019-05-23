#include "Cash.h"
#include <math.h>
Cash::Cash()
{
}

Cash::~Cash()
{
}
CashRebate::CashRebate(double m)
{
    moneyRebate = m;
}
CashRebate::~CashRebate()
{
}
double CashRebate::acceptMoney(double money)
{
    return money * moneyRebate;
}

CashReturn::CashReturn(double mc,double mr)
{
    moneyCondition = mc;
    moneyReturn = mr;
}

CashReturn::~CashReturn()
{
}
double CashReturn::acceptMoney(double money)
{
    double result = 0;
    if(money>=moneyCondition){
        result = money - floor(money/moneyCondition)*moneyReturn;
    }
    return result;
    
}