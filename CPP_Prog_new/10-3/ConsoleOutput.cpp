#include <iostream>
namespace mystd
{
    using namespace std;    //printf 함수의 호출을 위해 선언

    class ostream
    {
    public:
        void operator<< (char * str)
        {
            printf("%s", str);
        }
        void operator<< (char str)
        {
            printf("%c", str);
        }
        void operator<< (int num)
        {
            printf("%d", num);
        }
        void operator<< (double e)
        {
            printf("%g", e);
        }
        void operator<< (ostream& (*fp)(ostream &ostm)) //함수 포인터의 선언: 함수의 반환형 (*함수 포인터의 이름)(매개변수)
        {
            fp(*this);
        }
    };

    ostream& endl(ostream &ostm)
    {
        ostm<<'\n';
        fflush(stdout); //출력 버퍼에 있는 데이터를 비우는 즉시 출력
        return ostm;
    }

    ostream cout;   //cout는 객체 이름
}

int main(void)
{
    using mystd::cout;
    using mystd::endl;

    cout<<"Simple string";
    cout<<endl;
    cout<<3.14;
    cout<<endl;
    cout<<123;
    endl(cout);

    return 0;
}
