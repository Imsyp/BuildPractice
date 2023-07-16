#ifndef __FRUITSELLER_H_
#define __FRUITSELLER_H_

class FruSel
{
    int APPLE_PRICE; 
    int numOfApples;
    int myMoney;

public:
	void InitMembers(int price, int num, int money);
    int SalesApples(int money);  
    void ShowSalesResult() const;
};

#endif