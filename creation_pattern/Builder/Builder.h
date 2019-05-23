#ifndef __BUILDER_H__
#define __BUILDER_H__
#include <string>

using namespace std;
class Product;
class Builder
{
  private:
  protected:
    Builder();

  public:
    virtual ~Builder();
    virtual void BuildPartA(const string &BuildPara) = 0;
    virtual void BuildPartB(const string &BuildPara) = 0;
    virtual void BuildPartC(const string &BuildPara) = 0;
    virtual Product *GetRuslt() = 0;
};

class ConcreteBuilder : public Builder
{
  private:
  public:
    ConcreteBuilder();
    ~ConcreteBuilder();
    void BuildPartA(const string &BuildPara);
    void BuildPartB(const string &BuildPara);
    void BuildPartC(const string &BuildPara);
    Product *GetRuslt();
};



#endif