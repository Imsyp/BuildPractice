#include <iostream>
using namespace std;

template <class T1, class T2>   //�� �̻��� template type ��� ����

void ShowData(double num)   //�Լ� ���ø��� �Ű�����, ��ȯ �ڷ����� �⺻ �ڷ������� ���� ����
{
    cout<<(T1)num<<", "<<(T2)num<<endl; //cout<<T1(num)<<", "<<T2(num)<<endl;�� ���� ����
}

int main(void)
{
    ShowData<char, int>(65);    //�ƽ�Ű �ڵ� 65�� 'A'�� ���
    ShowData<char, int>(63);    //�ƽ�Ű �ڵ� 63�� '?'�� ���
    ShowData<char, double>(126.9);  //�ƽ�Ű �ڵ� 126�� '~'�� ���
    ShowData<short, double>(69.2);
    ShowData<short, double>(70.4);

    return 0;
}