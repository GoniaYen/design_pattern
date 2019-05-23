#ifndef _ELEMENT_H_
#define _ELEMENT_H_
class Visitor;

class Element
{
public:
    virtual ~Element();
    virtual void Accept(Visitor * vis) = 0;

protected:
    Element();

private:
};

class ConcreteElementA : public Element
{

public:
    ConcreteElementA();
    ~ConcreteElementA();
    void Accept(Visitor *vis);

private:
};

class ConcreteElementB : public Element
{
public:
    ConcreteElementB();
    ~ConcreteElementB();
    void Accept(Visitor *vis);

private:
protected:
};

#endif //~_ELEMENT_H_