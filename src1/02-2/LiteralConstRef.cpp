#include <iostream>
using namespace std;

int Adder(const int &ref1, const int &ref2)
{
    return ref1+ref2;
}

int main(void)
{
    cout<<Adder(4,3)<<endl;

    return 0;
}
