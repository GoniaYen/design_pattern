#include "factory.h"
#include "operation.h"
#include <iostream>
using namespace std;
int main(int argc,char* argv[])
{
    factory *fac = new create_operation_div();
    operation *oper  = fac->create_operation();
    oper->set_a_num(10);
    oper->set_b_num(10);
    double result = oper->get_result();
    cout<<"result1 is "<<result<<endl;
    delete fac;
    delete oper;
    return 0;
}