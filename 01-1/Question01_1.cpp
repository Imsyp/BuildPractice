#include <iostream>


int main(void)
{
    int result=0;
    int val=0;

    for(int i=0; i<5; i++)
    {
        std::cout<< i + 1 << "��° ���� �Է�: ";
        std::cin>>val;
        result+=val;
    }
 
    std::cout<<"�հ�: "<<result<<std::endl;
    return 0;
}