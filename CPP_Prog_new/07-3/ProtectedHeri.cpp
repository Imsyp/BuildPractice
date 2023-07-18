#include <iostream>
using namespace std;

class Base
{
private:
    int num1;
protected:
    int num2;
public:
    int num3;

    Base() : num1(1), num2(2), num3(3)
    { }
};

class Derived : protected Base 
{ 
/*
접근불가 : 
    int num1;
protected:
    int num2;
protected:  <- 클래스가 protected 선언되었기 때문에 범위가 protected보다 넓은 public은 protected로 변환
    int num3;
*/
}; 

int main(void)
{
    Derived drv;
    // cout<<drv.num3<<endl; <- 컴파일 에러 발생
    return 0;
}