#ifndef __ABSTRACTFACTORY_H__
#define __ABSTRACTFACTORY_H__
class IUser;
class IDept;

class AbstractFactory
{
private:
  /* data */
public:
  virtual ~AbstractFactory();
  virtual IUser *CreateUser() = 0;
  virtual IDept *CreateDept() = 0;

protected:
  AbstractFactory();
};
class AccessFactory : public AbstractFactory
{
private:
  /* data */
public:
  AccessFactory();
  ~AccessFactory();
  IUser *CreateUser();
  IDept *CreateDept();
};


class SqlServerFactory : public AbstractFactory
{
private:
  /* data */
public:
  SqlServerFactory(/* args */);
  ~SqlServerFactory();
  IUser *CreateUser();
  IDept *CreateDept();
};

#endif