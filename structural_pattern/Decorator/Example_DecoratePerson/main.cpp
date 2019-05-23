#include <iostream>
#include "Person.h"
using namespace std;

int main(int argc, char **argv)
{
    Person *p = new Person("小菜");
    cout << "他的装扮：" << endl;

    TShirts tx;
    BigTrouser bg;
    Sneaker sk;

    tx.Decorate(p);
    bg.Decorate(&tx);
    sk.Decorate(&bg);

    sk.show();



    cout<<endl ;

    delete p;
    return 0;
}