#include <iostream>
using namespace std;

class SelfRef
{
private:
    int num;
public:
    SelfRef(int n) : num(n)
    {
        cout<<"객체 생성"<<endl;
    }

    SelfRef& Adder(int n) // 객체 자신의 참조값을 반환
    {
        num +=n;
        return *this; // 객체 자신의 값
    }

    SelfRef& ShowTwoNumber() // 객체 자신의 참조값을 반환
    {
        cout<<num<<endl;
        return *this; // 객체 자신의 값
    }
};

int main(void)
{
    SelfRef obj(3);
    SelfRef &ref = obj.Adder(2); // 함수 Adder의 반환값이 자신의 참조값이기 때문에 ref는 obj를 참조

    obj.ShowTwoNumber();
    ref.ShowTwoNumber();

    ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();

    return 0;
}

