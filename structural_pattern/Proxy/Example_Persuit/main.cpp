#include "Proxy.h"
#include <iostream>
using namespace std;

int main(int agrc,char **argv)
{
    Schoolgirl jj;
    jj.set_name("娇娇");
    
    Proxy dl(jj);
    dl.GiveChocolate();
    dl.GiveDolls();
    dl.GiveFlowers();

    return 0;
}