#include <iostream>
using namespace std;

class Point;

class Point0P
{
private:
    int opcnt;
public:
    Point0P() : opcnt(0)
    { }

    Point PointAdd(const Point&, const Point&);
    Point PointSub(const Point&, const Point&);
    ~Point0P()
    {
        cout<<"Operation times : "<<opcnt<<endl;
    }
};

class Point
{
private:
    int x;
    int y;
public:
    Point(const int &xpos, const int &ypos) : x(xpos), y(ypos)
    { }
    friend Point Point0P::PointAdd(const Point&, const Point&);
    friend Point Point0P::PointSub(const Point&, const Point&);
    friend void ShowPointPos(const Point&); // ShowPointPos 함수의 선언과 동시에 해당 함수에 대한 friend 선언
};

Point Point0P::PointAdd(const Point& pnt1, const Point& pnt2)
{
    opcnt++;
    return Point(pnt1.x+pnt2.x, pnt1.y+pnt2.y);
}

Point Point0P::PointSub(const Point& pnt1, const Point& pnt2)
{
    opcnt++;
    return Point(pnt1.x-pnt2.x, pnt1.y-pnt2.y);
}

int main(void)
{
    Point pos1(1, 2);
    Point pos2(2, 4);
    Point0P op;

    ShowPointPos(op.PointAdd(pos1, pos2));
    ShowPointPos(op.PointSub(pos2, pos1));

    return 0;
}

void ShowPointPos(const Point& pos)
{
    cout<<"x : "<<pos.x<<", ";
    cout<<"y : "<<pos.y<<endl;
}