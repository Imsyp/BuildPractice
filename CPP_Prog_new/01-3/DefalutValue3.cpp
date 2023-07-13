#include <iostream>

int BoxVolume(int length, int width=1, int height=1);

int main(void)
{
    std::cout<<"[3,5,5] : "<<BoxVolume(3,5,5)<<std::endl;
    std::cout<<"[3,5,D] : "<<BoxVolume(3,5)<<std::endl;
    std::cout<<"[3,D,D] : "<<BoxVolume(3)<<std::endl;
//  std::cout<<"[D,D,D] : "<<BoxVolume()<<std::endl;

    return 0;
}

int BoxVolume(int length, int width, int height)
{
    return length*width*height;
}