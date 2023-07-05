#include <iostream>

namespace NumSpace1
{
    int num = 1;

    namespace NumSpace2
    {
        int num = 2;
    }
    
    namespace NumSpace3
    {
        int num = 3;
    }
}

int main(void)
{
    std::cout<< NumSpace1::num <<std::endl;
    std::cout<< NumSpace1::NumSpace2::num <<std::endl;
    std::cout<< NumSpace1::NumSpace3::num <<std::endl;
}