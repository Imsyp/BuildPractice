#include <iostream>
using namespace std;

int MyFunc(int n1, int n2)  //함수 포인터와 반환형, 매개변수 타입 맞춰야 함
{
    cout<<"더해진 숫자는 "<<n1+n2<<"!!"<<endl;
    return n1+n2;
}

int main(void)
{

    int (*Fptr)(int n1, int n2); 
    Fptr = MyFunc;   //C++에서는 함수를 함수 포인터로 암묵적으로 변환 -> 주소 연산자 &를 사용할 필요 X
    cout<<MyFunc<<endl;
    cout<<Fptr<<endl;

    Fptr(3, 2);

    return 0;
}