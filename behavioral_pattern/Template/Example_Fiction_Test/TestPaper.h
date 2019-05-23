#ifndef __TESTPAPER_H__
#define __TESTPAPER_H__
#include <iostream>
using namespace std;

class TestPaper
{
  private:
    /* data */
  public:
    TestPaper(/* args */);
    ~TestPaper();
    void TestQuestion1();
    void TestQuestion2();
    void TestQuestion3();
    virtual char Answer1() = 0;
    virtual char Answer2() = 0;
    virtual char Answer3() = 0;
};

class TestPaperA : public TestPaper
{
  private:
    /* data */
  public:
    TestPaperA(/* args */);
    ~TestPaperA();
    char Answer1();
    char Answer2();
    char Answer3();
};

class TestPaperB : public TestPaper
{
  private:
    /* data */
  public:
    TestPaperB(/* args */);
    ~TestPaperB();
    char Answer1();
    char Answer2();
    char Answer3();
};



#endif