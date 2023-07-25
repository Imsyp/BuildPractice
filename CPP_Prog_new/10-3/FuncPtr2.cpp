#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a+b;
}

void print_odd(int a, int b, int (*fPtr)(int, int))
{
    int ret = fPtr(a, b);

    if(ret % 2 == 1)
        cout<<ret<<endl;
    else
        cout<<"È¦¼ö°¡ ¾Æ´Ô"<<endl;
}

int main(void)
{
    print_odd(1, 3, add);
    print_odd(1, 4, add);

    return 0;
}