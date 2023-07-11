#include <iostream>
using namespace std;

int main(void)
{
    int *ptr = new int;
    int &ref = *ptr;
    ref = 20;
    cout<<*ptr<<endl;

    return 0;
}