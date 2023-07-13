#include <iostream>
using namespace std;

void SwapByRef2(int &ref1, int &ref2)
{
    cout<<"ref1�� �ּ�:"<<&ref1<<endl;
    cout<<"ref2�� �ּ�:"<<&ref2<<endl;

    int temp = ref1;
    ref1 = ref2;
    ref2 = temp;
}

int main(void)
{
    int x = 10;
    int y = 20;

    cout<<"x�� �ּ�:"<<&x<<endl;
    cout<<"y�� �ּ�:"<<&y<<endl;

    SwapByRef2(x, y);

    return 0;
}