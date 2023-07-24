#include <iostream>
namespace mystd
{
    using namespace std;    //printf �Լ��� ȣ���� ���� ����

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
        void operator<< (ostream& (*fp)(ostream &ostm)) //�Լ� �������� ����: �Լ��� ��ȯ�� (*�Լ� �������� �̸�)(�Ű�����)
        {
            fp(*this);
        }
    };

    ostream& endl(ostream &ostm)
    {
        ostm<<'\n';
        fflush(stdout); //��� ���ۿ� �ִ� �����͸� ���� ��� ���
        return ostm;
    }

    ostream cout;   //cout�� ��ü �̸�
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
