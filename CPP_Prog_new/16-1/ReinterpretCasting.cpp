#include <iostream>
using namespace std;

int main(void)
{
    int num=0x010203;
    char * ptr=reinterpret_cast<char*>(&num);   //int형 정수에 바이트 단위 접근을 위해 int형 포인터를 char형 포인터로 형 변환

    for(int i=0; i<sizeof(num); i++)
        cout<<static_cast<int>(*(ptr+i))<<endl; //바이트 단위 데이터를 문자가 아닌 정수의 형태로 출력하기 위해 char형 데이터를 int형으로 변환

    return 0;
}