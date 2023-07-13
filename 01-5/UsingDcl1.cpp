#include <iostream>

namespace MySpace1
{
    void MyFunc(void)
    {
        std::cout<<"It's my function!"<<std::endl;
        std::cout<<"In namespace MySpace1!"<<std::endl;
    }
}

int main(void)
{
    using MySpace1::MyFunc;
    MyFunc();

    return 0;
}