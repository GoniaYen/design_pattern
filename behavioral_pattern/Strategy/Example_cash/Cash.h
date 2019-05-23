#ifndef __CASH_H__
#define __CASH_H__
class Cash
{
  private:
    

  public:
    Cash(/* args */);
    ~Cash();
    virtual double acceptMoney(double money) = 0;
};

class CashRebate : public Cash
{
  private:
    double moneyRebate = 1.0;

  public:
    CashRebate(double m);
    virtual ~CashRebate();
    double acceptMoney(double money);
};
class CashReturn : public Cash
{
  private:
    double moneyCondition = 0.0;
    double moneyReturn = 0.0;

  public:
    CashReturn(double mc, double mr);
    ~CashReturn();
    double acceptMoney(double money);
};

#endif