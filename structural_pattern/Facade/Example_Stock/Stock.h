#ifndef __STOCK_H__
#define __STOCK_H__
class Stock1
{
private:
    /* data */
public:
    Stock1(/* args */);
    ~Stock1();
    void Buy();
    void Sell();
};



class Stock2
{
private:
    /* data */
public:
    Stock2(/* args */);
    ~Stock2();
    void Buy();
    void Sell();
};

class NationalDebt
{
private:
    /* data */
public:
    NationalDebt(/* args */);
    ~NationalDebt();
    void Buy();
    void Sell();
};


class Realty
{
private:
    /* data */
public:
    Realty(/* args */);
    ~Realty();
    void Buy();
    void Sell();
};


class Fund
{
private:
    Stock1 *_stock1;
    Stock2 *_stock2;
    NationalDebt *_nd;
    Realty *_ral;

public:
    Fund(/* args */);
    ~Fund();
    void BuyFund();
    void SellFund();
};

#endif
