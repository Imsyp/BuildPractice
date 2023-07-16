#include <iostream>
#include "FruitSeller.h"
using namespace std;

void FruSel::InitMembers(int price, int num, int money)
{
    APPLE_PRICE = price;
    numOfApples = num;
    myMoney = money;
}

int FruSel::SalesApples(int money)
{
    int num = money / 1000;
    numOfApples -= num;
    myMoney += money;
    return num;
}

void FruSel::ShowSalesResult() const
{
    cout << "남은 사과 : " << numOfApples << endl;
    cout << "판매 수익 : " << myMoney << endl;
}