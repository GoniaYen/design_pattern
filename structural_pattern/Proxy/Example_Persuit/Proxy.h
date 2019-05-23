#ifndef __PROXY_H__
#define __PROXY_H__
#include <string>
#include <iostream>
using namespace std;
class Schoolgirl
{
  private:
    string _name;

  protected:
  public:
    Schoolgirl();
    ~Schoolgirl();
    string get_name();
    void set_name(string name);
};

class GiveGift
{
  private:
    /* data */
  public:
    GiveGift(/* args */);
    virtual ~GiveGift();
    virtual void GiveDolls() = 0;
    virtual void GiveFlowers() = 0;
    virtual void GiveChocolate() = 0;
};

class Persuit : public GiveGift
{
  private:
    Schoolgirl _mm;

  public:
    Persuit();
    Persuit(Schoolgirl mm);
    ~Persuit();
    void GiveDolls();
    void GiveFlowers();
    void GiveChocolate();
};
class Proxy : public GiveGift
{
  private:
    Persuit *_p;

  public:
    Proxy();
    ~Proxy();
    Proxy(Schoolgirl mm);
    void GiveDolls();
    void GiveFlowers();
    void GiveChocolate();
};

#endif