#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
T Max(T a, T b)
{
    return a > b ? a : b ;  
    /*
    삼항 연산자 -> (조건식) ? 반환값1 : 반환값2
    조건식의 결과값이 참(1)이면 반환값1 반환, 거짓(0)이면 반환값2 반환
    */
}

int main(void)
{
    cout << Max(11, 15) << endl;
    cout << Max('T', 'Q') << endl;
    cout << Max(3.5, 7.5) << endl;
    cout << Max("Simple", "Best") << endl;

    return 0;
}