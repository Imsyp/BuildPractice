#include <iostream>
using namespace std;

void Swap(int a, int b)
{
    cout<<"a狼 林家 :"<<&a<<endl;
    cout<<"b狼 林家 :"<<&b<<endl;

    int tmp = a;
    a = b;
    b = tmp;
}

int main(void)
{
    int x = 10;
    int y = 20;

    cout<<"x狼 林家 :"<<&x<<endl;
    cout<<"y狼 林家 :"<<&y<<endl;    
    Swap(x,y);

    return 0;
}