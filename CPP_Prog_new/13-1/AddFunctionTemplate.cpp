#include <iostream>
using namespace std;

template <typename T>

T Add(T num1, T num2)
{
    return num1+num2;
}

int main(void)
{
    cout<< Add<int>(15, 20)<<endl;  //T�� int�� �ؼ� ������� Add �Լ� ȣ��, int�� �ڷῡ ���� �Լ��� �̶��� �������
    cout<< Add<double>(2.9, 3.7)<<endl; //T�� double�� �ؼ� ������� Add �Լ� ȣ��, double�� �ڷῡ ���� �Լ��� �̶��� �������
    cout<< Add<int>(3.2, 3.2)<<endl;
    cout<< Add<double>(3.14, 2.75)<<endl;

    return 0;
}