#ifndef __DIRECTOR_H__
#define __DIRECTOR_H__
class Builder;
class Director
{
private:
   Builder *_bld;
public:
    Director(Builder *bld);
    ~Director();
    void Construct();
};




#endif