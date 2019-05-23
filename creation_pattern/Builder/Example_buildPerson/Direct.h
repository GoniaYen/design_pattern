#ifndef __DIRECT_H__
#define __DIRECT_H__

class Builder;
class Direct
{
private:
    Builder *_bld;
public:
    Direct( Builder *_bld);
    ~Direct();
    void construct();
};


#endif