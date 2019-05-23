#include "TestPaper.h"

TestPaper::TestPaper(/* args */)
{
}
TestPaper::~TestPaper()
{
}
void TestPaper::TestQuestion1()
{
    cout<<"杨过得到，后来给了郭靖。练成倚天剑，屠龙刀的玄铁可能是[]：a，球墨铸铁。b，马口铁。c，高速合金刚。d，碳素纤维"<<endl;
    cout<<"答案是："<<Answer1()<<endl;
}
void TestPaper::TestQuestion2()
{
    cout<<"杨过，程英，陆无双铲除了情花，造成【】。a，使这种植物不在害人。b，使一种珍稀物种灭绝。c，破话了那个生态圈的生态平衡，d，造成该地区沙漠化"<<endl;
    cout<<"答案是："<<Answer2()<<endl;
}
void TestPaper::TestQuestion3()
{
    cout<<"蓝凤凰致使华山师徒，桃谷六仙呕吐不止。如果你是大夫，会给他们开什么药【】a,阿司匹林。b，牛黄解毒片。c，氟哌酸。d，让他们喝大量的牛奶。e，以上全不对"<<endl;
    cout<<"答案是："<<Answer3()<<endl;
}


TestPaperA::TestPaperA(/* args */)
{
}

TestPaperA::~TestPaperA()
{
}
char TestPaperA::Answer1()
{
    return 'A';
}
char TestPaperA::Answer2()
{
    return 'A';
}
char TestPaperA::Answer3()
{
    return 'A';
}


TestPaperB::TestPaperB(/* args */)
{
}

TestPaperB::~TestPaperB()
{
}
char TestPaperB::Answer1()
{
    return 'B';
}
char TestPaperB::Answer2()
{
    return 'B';
}
char TestPaperB::Answer3()
{
    return 'B';
}