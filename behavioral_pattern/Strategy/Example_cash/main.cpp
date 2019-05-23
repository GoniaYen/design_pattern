#include "Factory.h"
#include "Cash.h"
#include <iostream>

using namespace std;
int main(int argc,char **argv)
{
    Factory *f  = nullptr;
    Cash *c = nullptr;

    double totlePrice = 0.0;
    cout<<"输入总价：　";
    cin>>totlePrice;

    int type;
    cout<<"选择收费类型，１，打折收费（包含正常收费），２，满减收费：";
    cin>>type;

    if(type == 1){
        double discount;
        cout<<"输入折扣率（正常收费输入１）：";
        cin>>discount;

        f = new Factory(discount);
        c= f->createOperation(1);
        cout<<"应收金额："<<c->acceptMoney(totlePrice)<<endl;
    }
    if(type == 2){
        double mc,mr;
        cout<<"输入满减金额:";
        cin>>mc;
        cout<<"输入反还金额：";
        cin>>mr;

        f= new Factory(mc,mr);
        c= f->createOperation(2);
        cout<<"应收金额："<<c->acceptMoney(totlePrice)<<endl;

    }
    delete c;
    delete f;
    return 0;
}