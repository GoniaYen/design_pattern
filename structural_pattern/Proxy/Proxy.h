#ifndef __PROXY_H__
#define __PROXY_H__
#include <string>
#include <iostream>
using namespace std;
class Subject //接口功能
{
private:
protected:
  Subject();

public:
  virtual ~Subject();
  virtual void Request() = 0;
};

class ConcreteSubject : public Subject
{
public:
  ConcreteSubject();
  ~ConcreteSubject();
  void Request();
};

class Proxy : public Subject
{
private:
  Subject *_p = NULL;

public:
  Proxy();
  ~Proxy();
  Proxy(Subject *p);
  void Request();
};

#endif