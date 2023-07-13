#include <iostream>
using namespace std;

int add(const int num1, const int num2)
{
    /*
    num1++;
    num2++;
    num1과 num2는 상수화된 매개변수로 함수 내부에서 변경할 수 없음
    */
    return num1+num2;
}

int main(void)
{
    cout<<add(1,2)<<endl;
    return 0;
}