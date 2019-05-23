#ifndef __PROTOTYPE_H__
#define __PROTOTYPR_H__

class ProtoType
{
  private:
  protected:
    ProtoType(/* args */);

  public:
    virtual ~ProtoType();
    virtual ProtoType *Clone() const = 0;
};

class ConcreteProtoType : public ProtoType
{
  private:
    /* data */
  public:
    ConcreteProtoType(/* args */);
    ConcreteProtoType(const ConcreteProtoType& cp);
    ~ConcreteProtoType();
    ProtoType *Clone() const;
};



#endif