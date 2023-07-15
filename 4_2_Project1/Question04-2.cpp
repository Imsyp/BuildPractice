#include <iostream>
using namespace std;

class Point
{
private:
    int xpos, ypos;
public:
    void Init(int x, int y)
    {
        xpos = x;
        ypos = y;
    }

    void ShowPointInfo() const
    {
        cout<<"["<<xpos<<", "<<ypos<<"]"<<endl;
    }
};

class Circle
{
private:
    Point cirmid;
    int rad;
public:
    void Init(const Point &pos, const int &r)
    {
        cirmid = pos;
        rad = r;
    }
};

class Ring
{
private:
    Point 
    Circle innerCir;
    Circle outterCir;
public:
    void Init(const int &x1, const int &y2,const int &rad1, const int &x2, const int &y2,const int &rad2 )
};




int main(void)
{
    Ring ring;
    ring.Init(1, 1, 4, 2, 2, 9)
    ring.ShowRingInfo();
    
    return 0;
}