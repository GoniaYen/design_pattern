#include <iostream>
#include "Resume.h"

using namespace std;

int main(int argc, char *argv[])
{
    Resume *p = new Resume("GoniaYen", "male", 23);
    p->DisPlay();
    cout << p << endl;

    Resume *p1 = p->Clone();
    p1->setName("YYY");
    p1->DisPlay();
    cout << p1 << endl;

    Resume *p2 = p1->Clone();
    p2->setName("XXX");
    p2->DisPlay();
    cout << p2 << endl;

    p->DisPlay();
    p1->DisPlay();
    p2->DisPlay();

    return 0;
}
