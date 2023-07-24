#include <iostream>
using namespace std;

int& RefReturn(int * ptr)
{
    return *ptr;
}

int main(void)
{
    int num1 = 1;
    int * ptr1 = &num1;
    int & ref = RefReturn(ptr1);
    cout<<ref<<endl;
    
    ++(*ptr1);
    ++(ref);

    cout<<ref<<", "<<*ptr1<<endl;

    return 0;
}