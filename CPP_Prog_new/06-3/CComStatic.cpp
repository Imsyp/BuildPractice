#include <iostream>
using namespace std;

void Counter()
{
    static int cnt; // static 변수는 전역변수와 마찬가지로 초기화하지 않을 시에 0으로 초기화된다.
    cnt++;
    cout<<"Current cnt : "<<cnt<<endl;
}

int main(void)
{
    for(int i =0; i<10; i++)
        Counter();
    return 0;
}
