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
        cout<<"��� ������ �� ����"<<endl;
        return false;
    }
    numOfApples += seller.SalesApples(money);
    myMoney -= money;

    return true;
}
void FruBuy::ShowBuyResult() const
{
    cout << "���� �ܾ� : " << myMoney << endl;
    cout << "��� ���� : " << numOfApples << endl;
}
