#include <iostream>
using namespace std;


int main(void)
{
    int num1 = 1;
    int num2 = 2;
    int* const ptr = &num1;

    cout<<num1<<endl;   
    cout<<*ptr<<endl;
    cout<<ptr<<endl;

    *ptr = 3; 


    cout<<num1<<endl;   
    cout<<*ptr<<endl;
    cout<<ptr<<endl;

    num1 = 4;

    cout<<num1<<endl;   
    cout<<*ptr<<endl;
    cout<<ptr<<endl;

    // ptr = &num2; ptr �ּҸ� �ٲٴ� ���� �Ұ���

    return 0;
}