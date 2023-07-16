#include <iostream>
#include "FruitSeller.h"
#include "FruitBuyer.h"
using namespace std;

int main(void)
{
    FruSel seller;
    seller.InitMembers(1000, 20, 0);
    FruBuy buyer;
    buyer.InitMembers(5000);
    buyer.BuyApples(seller, 2000);

    cout<<"���� �Ǹ����� ��Ȳ"<<endl;
    seller.ShowSalesResult();
    cout<<"���� �������� ��Ȳ"<<endl;
    buyer.ShowBuyResult();

    return 0;
}