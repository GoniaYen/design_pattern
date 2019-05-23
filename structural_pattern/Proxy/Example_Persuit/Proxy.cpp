#include <iostream>
#include "Proxy.h"

using namespace std;

Schoolgirl::Schoolgirl()
{
}
Schoolgirl::~Schoolgirl()
{
}
void Schoolgirl::set_name(string name)
{
    _name = name;
}

string Schoolgirl::get_name()
{
    return _name;
}
//++++++++++

GiveGift::GiveGift()
{
}

GiveGift::~GiveGift()
{
}
//++++++++++


Persuit::Persuit(Schoolgirl mm)
{
    _mm = mm;
}

Persuit::~Persuit()
{
}

void Persuit::GiveDolls()
{
    cout << _mm.get_name() << "送你洋娃娃" << endl;
}
void Persuit::GiveFlowers()
{
    cout << _mm.get_name() << "送你花" << endl;
}
void Persuit::GiveChocolate()
{
    cout << _mm.get_name() << "送你巧克力" << endl;
}
//++++++++++

Proxy::Proxy(/* args */)
{
}

Proxy::~Proxy()
{
    delete _p;
}
Proxy::Proxy(Schoolgirl mm)
{
    _p = new Persuit(mm);
}
void Proxy::GiveDolls()
{
    _p->GiveDolls();
}
void Proxy::GiveFlowers()
{
    _p->GiveFlowers();
}
void Proxy::GiveChocolate()
{
    _p->GiveChocolate();
}
