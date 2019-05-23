#include "TestPaper.h"
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    cout << "学生甲的试卷：" << endl;
    TestPaper *s1 = new TestPaperA();
    s1->TestQuestion1();
    s1->TestQuestion2();
    s1->TestQuestion3();

    cout << "学生乙的试卷：" << endl;

    TestPaper *s2 = new TestPaperB();
    s2->TestQuestion1();
    s2->TestQuestion2();
    s2->TestQuestion3();

    delete s1;
    delete s2;

    return 0;
}