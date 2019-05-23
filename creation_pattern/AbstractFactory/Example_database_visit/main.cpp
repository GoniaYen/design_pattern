#include<iostream>
#include "AbstractFactory.h"
#include "Product.h"

using namespace std;

int main(int argc,char* argv[])
{
    User user;
    Dept dept;
    AbstractFactory *af1 = new AccessFactory();

    IUser *iu1 = af1->CreateUser();
    iu1->insert(user);
    iu1->getUser(1);
    IDept *id1 = af1->CreateDept();
    id1->insert(dept);
    id1->getDept(1);


    AbstractFactory *af2 = new SqlServerFactory();
    IUser *iu2 = af2->CreateUser();
    iu2->insert(user);
    iu2->getUser(1);
    IDept *id2 = af2->CreateDept();
    id2->insert(dept);
    id2->getDept(1);

    delete iu1;
    delete id1;
    delete iu2;
    delete id2;

    return 0;
}
