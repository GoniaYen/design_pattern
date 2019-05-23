#include "AbstractFactory.h"
#include "Product.h"
#include <iostream>
using namespace std;
AbstractFactory::AbstractFactory()
{
}
AbstractFactory::~AbstractFactory()
{
}
AccessFactory::AccessFactory()
{
}
AccessFactory::~AccessFactory()
{
}
IUser *AccessFactory::CreateUser()
{
    return new AccessUser();
}
IDept *AccessFactory::CreateDept()
{
    return new AccessDept();
}


SqlServerFactory::SqlServerFactory()
{

}
SqlServerFactory::~SqlServerFactory()
{

}
IUser *SqlServerFactory::CreateUser()
{
    return new SqlServerUser();
}
IDept *SqlServerFactory::CreateDept()
{
    return new SqlServerDept(); 
}