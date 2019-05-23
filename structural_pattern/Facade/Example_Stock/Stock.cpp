#include <iostream>
#include "Stock.h"
using namespace std;


Stock1::Stock1(/* args */)
{
}

Stock1::~Stock1()
{
}
void Stock1::Buy()
{
    cout << "Buy stock1" << endl;
}
void Stock1::Sell()
{
    cout << "sell stock1..." << endl;
}


Stock2::Stock2(/* args */)
{
}

Stock2::~Stock2()
{
}
void Stock2::Buy()
{
    cout << "Buy stock2" << endl;
}
void Stock2::Sell()
{
    cout << "sell Stock2..." << endl;
}


NationalDebt::NationalDebt(/* args */)
{
}

NationalDebt::~NationalDebt()
{
}
void NationalDebt::Buy()
{
    cout << "Buy NationalDebt" << endl;
}
void NationalDebt::Sell()
{
    cout << "sell NationalDebt..." << endl;
}


Realty::Realty(/* args */)
{
}

Realty::~Realty()
{
}
void Realty::Buy()
{
    cout << "Buy Realty" << endl;
}
void Realty::Sell()
{
    cout << "sell Realty..." << endl;
}


Fund::Fund(/* args */)
{
    _stock1 = new Stock1();
    _stock2 = new Stock2();
    _nd = new NationalDebt();
    _ral = new Realty();
}

Fund::~Fund()
{
    delete _stock1;
    delete _stock2;
    delete _nd;
    delete _ral;
}
void Fund::BuyFund()
{
    _stock1->Buy();
    _stock2->Buy();
    _nd->Buy();
    _ral->Buy();
}
void Fund::SellFund()
{
    _stock1->Sell();
    _stock2->Sell();
    _nd->Sell();
    _ral->Sell();
}
