#include <iostream>
#include "PointTemplate.h"
#include "PointTemplate.cpp"    //���ø� ������ ��� �����ؾ� ��
using namespace std;

int main(void)
{
    Point<int> pos1(3, 4); 
    Point<double> pos2(2.4, 3.6);   
    Point<char> pos3('P', 'F'); 

    pos1.ShowPosition();
    pos2.ShowPosition();
    pos3.ShowPosition();

    return 0;
}