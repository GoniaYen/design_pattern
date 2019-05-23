#include "factory.h"
#include "operation.h"

factory::factory()
{

}
factory::~factory()
{
    
}
//add
create_operation_add::create_operation_add()
{

}
create_operation_add::~create_operation_add()
{

}
operation* create_operation_add::create_operation()
{
    return new operation_add();
}

//sub
create_operation_sub::create_operation_sub()
{

}
create_operation_sub::~create_operation_sub()
{

}
operation* create_operation_sub::create_operation()
{
    return new operation_sub();
}
//mul
create_operation_mul::create_operation_mul()
{

}
create_operation_mul::~create_operation_mul()
{

}
operation* create_operation_mul::create_operation()
{
    return new operation_mul();
}
//div
create_operation_div::create_operation_div()
{

}
create_operation_div::~create_operation_div()
{

}
operation* create_operation_div::create_operation()
{
    return new operation_div();
}


