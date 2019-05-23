#include "operation.h"
#include <iostream>
using namespace std;

operation::operation()
{
}
operation::~operation()
{
}
void operation::set_a_num(double a)
{
    a_num = a;
}
void operation::set_b_num(double b)
{
    b_num = b;
}
double operation::get_a_num()
{
    return a_num;
}
double operation::get_b_num()
{
    return b_num;
}

//add
operation_add::operation_add()
{
}
operation_add::~operation_add()
{
}
double operation_add::get_result()
{
    double result = 0;
    result = get_a_num() + get_b_num();
    return result;
}

//sub
operation_sub::operation_sub()
{
}
operation_sub::~operation_sub()
{
}
double operation_sub::get_result()
{
    double result = 0;
    result = get_a_num() - get_b_num();
    return result;
}
//mul
operation_mul::operation_mul()
{
}
operation_mul::~operation_mul()
{
}
double operation_mul::get_result()
{
    double result = 0;
    result = get_a_num() * get_b_num();
    return result;
}
//div
operation_div::operation_div()
{
}
operation_div::~operation_div()
{
}
double operation_div::get_result()
{
    if (get_b_num()==0) {
        cout<<"除数不能为0！！"<<endl;
        return -1;
    }
    
    double result = 0;
    result = get_a_num() / get_b_num();
    return result;
}