#include <iostream>
using namespace std;


int main(void)
{
    int num1 = 1;
    int num2 = 2;
    const int * ptr = &num1;

    cout<<num1<<endl;   
    cout<<*ptr<<endl;
    cout<<ptr<<endl;

    // *ptr = 3; �����Ͱ� ����Ű�� ���� �ٲٴ� ���� �Ұ���
    num1 = 3;

    cout<<num1<<endl;   
    cout<<*ptr<<endl;
    cout<<ptr<<endl;

    ptr = &num2;

    cout<<num2<<endl;   
    cout<<*ptr<<endl;
    cout<<ptr<<endl;    

    return 0; 
}
