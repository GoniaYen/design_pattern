#ifndef __PRODUCT_H__
#define __PRODUCT_H__

class User
{
  private:
  public:
    User() {}
    ~User() {}
};
class Dept
{
  private:
  public:
    Dept(){};
    ~Dept(){};
};

class IUser
{
  private:
  public:
    virtual ~IUser();
    virtual void insert(User user) = 0;
    virtual User getUser(int id) = 0;

  protected:
    IUser();
};
class IDept
{
  private:
  protected:
    IDept();

  public:
    ~IDept();
    virtual void insert(Dept dept) = 0;
    virtual Dept getDept(int id) = 0;
};

class AccessUser:public IUser
{
private:
    
public:
    AccessUser();
    ~AccessUser();
    void insert(User user);
    User getUser(int id);
};


class SqlServerUser:public IUser
{
private:
    /* data */
public:
    SqlServerUser(/* args */);
    ~SqlServerUser();
    void insert(User user);
    User getUser(int id);
};

class AccessDept:public IDept
{
private:
    /* data */
public:
    AccessDept(/* args */);
    ~AccessDept();
    void insert(Dept dept);
    Dept getDept(int id);
};
class SqlServerDept:public IDept
{
private:
    /* data */
public:
    SqlServerDept(/* args */);
    ~SqlServerDept();
    void insert(Dept dept);
    Dept getDept(int id);
};


#endif