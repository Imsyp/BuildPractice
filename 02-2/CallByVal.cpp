#include <iostream>
using namespace std;

void Swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

int main(void)
{
    int x = 10;
    int y = 20;

    cout<<x<<" "<<y<<endl;
    Swap(x,y);
    cout<<x<<" "<<y<<endl;

    return 0;
}