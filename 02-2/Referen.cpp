#include <iostream>
using namespace std;

int main(void)
{
    int num1 =1024;
    int &num2 = num1;

    num2 = 2048;
    cout<<num1<<endl;
    cout<<num2<<endl;

    cout<<&num1<<endl;
    cout<<&num2<<endl;

    return 0; 
}