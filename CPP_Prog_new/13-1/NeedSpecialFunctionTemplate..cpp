#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
T Max(T a, T b)
{
    return a > b ? a : b ;  
    /*
    ���� ������ -> (���ǽ�) ? ��ȯ��1 : ��ȯ��2
    ���ǽ��� ������� ��(1)�̸� ��ȯ��1 ��ȯ, ����(0)�̸� ��ȯ��2 ��ȯ
    */
}

int main(void)
{
    cout << Max(11, 15) << endl;
    cout << Max('T', 'Q') << endl;
    cout << Max(3.5, 7.5) << endl;
    cout << Max("Simple", "Best") << endl;

    return 0;
}