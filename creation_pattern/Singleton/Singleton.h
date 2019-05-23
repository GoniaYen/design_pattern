#ifndef __SINGLETON_H__
#define __SINGLETON_H__

#include <iostream>
using namespace std;

class Singleton
{
private:
    static Singleton *_instance;
    /* data */
protected:
    Singleton();
public:
    static Singleton *Instance();
};



#endif