#include <iostream>
using namespace std;

template <typename T>

T Add(T num1, T num2)
{
    return num1+num2;
}

int main(void)
{
    cout<< Add<int>(15, 20)<<endl;  //T를 int로 해서 만들어진 Add 함수 호출, int형 자료에 대한 함수는 이때만 만들어짐
    cout<< Add<double>(2.9, 3.7)<<endl; //T를 double로 해서 만들어진 Add 함수 호출, double형 자료에 대한 함수는 이때만 만들어짐
    cout<< Add<int>(3.2, 3.2)<<endl;
    cout<< Add<double>(3.14, 2.75)<<endl;

    return 0;
}