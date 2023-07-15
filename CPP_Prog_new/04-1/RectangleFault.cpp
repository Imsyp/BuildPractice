#include <iostream>
using namespace std;

class Point
{
public: // 멤버변수가 public으로 선언되면 init 함수 없이도 초기화가 가능
    int x; // x좌표 범위는 0이상 100이하
    int y; // y좌표 범위는 0이상 100이하
};

class Rectangle
{
public:  
    Point upLeft;
    Point lowRight;

public:
    void ShowRecInfo()
    {
        cout<<"좌 상단: "<<'['<<upLeft.x<<',';
        cout<<upLeft.y<<']'<<endl;
        cout<<"우 하단: "<<'['<<lowRight.x<<',';
        cout<<lowRight.y<<']'<<endl<<endl;
    }
};

int main(void)
{
    Point pos1 = {-2, 4}; // 좌표의 범위가 0 아래로 내려갔다.
    Point pos2 = {5, 9};  //직사각형을 만드려면 좌상단의 x좌표값이 우상단의 x좌표값보다 작아야 한다.
    Rectangle rec = {pos2, pos1};
    rec.ShowRecInfo();

    return 0;
}