#include <iostream>
using namespace std;

int main(void)
{
    int num=0x010203;
    char * ptr=reinterpret_cast<char*>(&num);   //int�� ������ ����Ʈ ���� ������ ���� int�� �����͸� char�� �����ͷ� �� ��ȯ

    for(int i=0; i<sizeof(num); i++)
        cout<<static_cast<int>(*(ptr+i))<<endl; //����Ʈ ���� �����͸� ���ڰ� �ƴ� ������ ���·� ����ϱ� ���� char�� �����͸� int������ ��ȯ

    return 0;
}