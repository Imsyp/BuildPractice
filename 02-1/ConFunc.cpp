#include <iostream>
using namespace std;

int add(const int num1, const int num2)
{
    /*
    num1++;
    num2++;
    num1�� num2�� ���ȭ�� �Ű������� �Լ� ���ο��� ������ �� ����
    */
    return num1+num2;
}

int main(void)
{
    cout<<add(1,2)<<endl;
    return 0;
}