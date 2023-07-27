#include <iostream>
using namespace std;

template <class T1, class T2>   //둘 이상의 template type 명시 가능

void ShowData(double num)   //함수 템플릿의 매개변수, 반환 자료형도 기본 자료형으로 선언 가능
{
    cout<<(T1)num<<", "<<(T2)num<<endl; //cout<<T1(num)<<", "<<T2(num)<<endl;과 같은 문장
}

int main(void)
{
    ShowData<char, int>(65);    //아스키 코드 65번 'A'가 출력
    ShowData<char, int>(63);    //아스키 코드 63번 '?'가 출력
    ShowData<char, double>(126.9);  //아스키 코드 126번 '~'가 출력
    ShowData<short, double>(69.2);
    ShowData<short, double>(70.4);

    return 0;
}