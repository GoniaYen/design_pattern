#ifndef __OPERATION_H__
#define __OPERATION_H__

class operation
{
  private:
    double a_num = 0;
    double b_num = 0;

  protected:
    operation();

  public:
    virtual ~operation() = 0;
    void set_a_num(double a);
    void set_b_num(double b);
    double get_a_num();
    double get_b_num();
    virtual double get_result() = 0;
};

//add
class operation_add:public operation
{
  private:
    /* data */
  public:
    operation_add(/* args */);
    ~operation_add();
    double get_result();
};
//sub
class operation_sub:public operation
{
  private:
    /* data */
  public:
    operation_sub(/* args */);
    ~operation_sub();
    double get_result();
};
//mul
class operation_mul:public operation
{
  private:
    /* data */
  public:
    operation_mul(/* args */);
    ~operation_mul();
    double get_result();
};
//div
class operation_div:public operation
{
  private:
    /* data */
  public:
    operation_div(/* args */);
    ~operation_div();
    double get_result();
};

#endif