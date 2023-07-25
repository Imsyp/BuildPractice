#include <iostream>
using namespace std;

class Test
{
public:
    int add(int n1, int n2)
    {
        return n1+n2;
    }
};

int main(void)
{
    Test test;
    int (Test::*fPtr)(int, int) = &Test::add;
    cout<<(test.*fPtr)(1,2)<<endl;
}