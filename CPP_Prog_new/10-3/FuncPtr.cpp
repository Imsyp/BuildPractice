#include <iostream>
using namespace std;

int MyFunc(int n1, int n2)  //�Լ� �����Ϳ� ��ȯ��, �Ű����� Ÿ�� ����� ��
{
    cout<<"������ ���ڴ� "<<n1+n2<<"!!"<<endl;
    return n1+n2;
}

int main(void)
{

    int (*Fptr)(int n1, int n2); 
    Fptr = MyFunc;   //C++������ �Լ��� �Լ� �����ͷ� �Ϲ������� ��ȯ -> �ּ� ������ &�� ����� �ʿ� X
    cout<<MyFunc<<endl;
    cout<<Fptr<<endl;

    Fptr(3, 2);

    return 0;
}