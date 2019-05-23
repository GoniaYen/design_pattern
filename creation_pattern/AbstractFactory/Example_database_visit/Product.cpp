#include <iostream>
#include "Product.h"
using namespace std;
IUser::IUser()
{
}
IUser::~IUser()
{
}
IDept::IDept()
{
}
IDept::~IDept()
{
}
AccessUser::AccessUser()
{
}
AccessUser::~AccessUser()
{
}
void AccessUser::insert(User user)
{
    cout << "在Access的user表里加一条数据" << endl;
}
User AccessUser::getUser(int id)
{
    User u;
    cout << "在Access的根据id得到user" << endl;
    return u;
}
AccessDept::AccessDept()
{
}
AccessDept::~AccessDept()
{
}
void AccessDept::insert(Dept dept)
{
    cout << "在Access的Dept表里加一条数据" << endl;
}
Dept AccessDept::getDept(int id)
{
    Dept dept;
    cout << "在Access的根据id得到Dept" << endl;
    return dept;
}

SqlServerUser::SqlServerUser()
{
}
SqlServerUser::~SqlServerUser()
{
}

void SqlServerUser::insert(User user)
{
    cout << "在SqlServer的user表里加一条数据" << endl;
}
User SqlServerUser::getUser(int id)
{
    User u;
    cout << "在SqlServer的根据id得到user" << endl;
    return u;
}
SqlServerDept::SqlServerDept()
{
}
SqlServerDept::~SqlServerDept()
{
}
void SqlServerDept::insert(Dept dept)
{
    cout << "在SqlServer的dept表里加一条数据" << endl;
}
Dept SqlServerDept::getDept(int id)
{
    Dept dept;
    cout << "在SqlServer的根据id得到Dept" << endl;
    return dept;
}