#include <iostream>
using namespace std;

void Swap(int a, int b)
{
    cout<<"a�� �ּ� :"<<&a<<endl;
    cout<<"b�� �ּ� :"<<&b<<endl;

    int tmp = a;
    a = b;
    b = tmp;
}

int main(void)
{
    int x = 10;
    int y = 20;

    cout<<"x�� �ּ� :"<<&x<<endl;
    cout<<"y�� �ּ� :"<<&y<<endl;    
    Swap(x,y);

    return 0;
}