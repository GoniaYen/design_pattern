#ifndef __STRATEGY_H__
#define __STRATEGY_H__
class Strategy
{
  private:
    /* data */
  public:
    Strategy(/* args */);
    virtual ~Strategy();
    virtual void AlgorithmInterface() = 0;
};

class ConcreteStrategyA : public Strategy
{
  private:
  public:
    ConcreteStrategyA(/* args */);
    ~ConcreteStrategyA();
    void AlgorithmInterface();
};

class ConcreteStrategyB : public Strategy
{
  private:
    /* data */
  public:
    ConcreteStrategyB(/* args */);
    ~ConcreteStrategyB();
    void AlgorithmInterface();
};

#endif