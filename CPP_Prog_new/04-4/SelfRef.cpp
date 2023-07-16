#include <iostream>
using namespace std;

class SelfRef
{
private:
    int num;
public:
    SelfRef(int n) : num(n)
    {
        cout<<"��ü ����"<<endl;
    }

    SelfRef& Adder(int n) // ��ü �ڽ��� �������� ��ȯ
    {
        num +=n;
        return *this; // ��ü �ڽ��� ��
    }

    SelfRef& ShowTwoNumber() // ��ü �ڽ��� �������� ��ȯ
    {
        cout<<num<<endl;
        return *this; // ��ü �ڽ��� ��
    }
};

int main(void)
{
    SelfRef obj(3);
    SelfRef &ref = obj.Adder(2); // �Լ� Adder�� ��ȯ���� �ڽ��� �������̱� ������ ref�� obj�� ����

    obj.ShowTwoNumber();
    ref.ShowTwoNumber();

    ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();

    return 0;
}

