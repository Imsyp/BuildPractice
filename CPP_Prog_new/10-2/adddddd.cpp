#include <iostream>
using namespace std;

int main(void)
{
    int num1 = 10;
    int num2 = 10;
    cout<<num1++<<endl;	//후위증가, 출력 후 num의 값 증가
    cout<<++num2<<endl;	//전위증가, num의 값 증가 후 출력

    cout<<num1<<", "<<num2<<endl;
    return 0;
}