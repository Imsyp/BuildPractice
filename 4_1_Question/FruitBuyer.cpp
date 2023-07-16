#include <iostream>
#include "FruitBuyer.h"

using namespace std;

void FruBuy::InitMembers(int money)
{
    myMoney = money;
    numOfApples = 0;
}

bool FruBuy::BuyApples(FruSel &seller, int money)
{
    if(money<0)
    {
        cout<<"벗어난 범위의 값 전달"<<endl;
        return false;
    }
    numOfApples += seller.SalesApples(money);
    myMoney -= money;

    return true;
}
void FruBuy::ShowBuyResult() const
{
    cout << "현재 잔액 : " << myMoney << endl;
    cout << "사과 개수 : " << numOfApples << endl;
}
