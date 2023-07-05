#include <iostream>
using namespace std;

int val=20;

int main(void)
{
    int val=1;
    cout<<"지역변수 : "<<val<<endl;
    cout<<"전역변수 : "<<::val<<endl;

    return 0;
}