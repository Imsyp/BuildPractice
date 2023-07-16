#ifndef __FRUITBUYER_H_
#define __FRUITBUYER_H_

#include "FruitSeller.h"

class FruBuy
{
    int myMoney; 
    int numOfApples;  

public:
    void InitMembers(int money);
    bool BuyApples(FruSel &seller, int money);
    void ShowBuyResult() const;
};

#endif