#include <iostream>
using namespace std;

class Temporary
{
private:
    int num;
public:
    Temporary(int n) : num(n)
    {
        cout<<"create obj : "<<num<<endl;
    }
    ~Temporary()
    {
        cout<<"destroy obj: "<<num<<endl;
    }
    void ShowTempInfo()
    {
        cout<<"My num is "<<num<<endl;
    }
};

int main(void)
{
    Temporary(100); // 임시객체 생성 방법, Temporary Temp(100)과 같은 객체 생성 방법과 차이가 조금 있음
    cout<<"********** after make!"<<endl<<endl;

    Temporary(200).ShowTempInfo();
    cout<<"********** after make!"<<endl<<endl;

    const Temporary &ref = Temporary(300);
    cout<<"********** after make!"<<endl<<endl;

    return 0;
}