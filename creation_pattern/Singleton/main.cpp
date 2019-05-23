#include "Singleton.h"
#include <iostream>
using namespace std;
int main(int argc,char *argv[])
{
    Singleton *sgn1 = Singleton::Instance();
    Singleton *sgn2 = Singleton::Instance();
    Singleton *sgn3 = Singleton::Instance();
   

    cout<<sgn1<<" "<<" "<<sgn2<<" "<<sgn3<<endl;


    return 0;
}