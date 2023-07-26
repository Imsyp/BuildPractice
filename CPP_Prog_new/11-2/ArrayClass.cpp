#include <iostream>
#include <cstdlib>
using namespace std;

class BoundCheckIntArray
{
private:
    int * arr;
    int arrlen;
public:
    BoundCheckIntArray(int len) : arrlen(len)
    {
        arr = new int[len];
    }
    int& operator[] (int idx)   //배열 요소의 참조값을 반환하여 연속 접근 가능하게 만듦
    {
        if(idx<0 || idx>=arrlen)
        {
            cout<<"Array index out of bound exception"<<endl;
            exit(1);
        }
        return arr[idx];
    }
    ~BoundCheckIntArray()
    {
        delete []arr;
    }
};

int main(void)
{
    BoundCheckIntArray arr(5);
    for(int i = 0; i<5; i++)
        arr[i] = (i+1)*11;
    for (int i = 0; i<6; i++)   //반복의 범위를 1 넘치게 설정
        cout<<arr[i]<<endl;

    return 0;
}