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
    int GetX() const
    {
        return xpos;
    }
    int GetY() const
    {
        return ypos;
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
    int GetX() const
    {
        return cirmid.GetX();
    }
    int GetY() const
    {
        return cirmid.GetY();
    }
    int GetR() const
    {
        return rad;
    }
    void ShowPointInfo() const
    {
        cout<<"radius : "<<rad<<endl;
        cirmid.ShowPointInfo();
    }    
};

class Ring
{
private: 
    Point innerPos;
    Point outterPos;
    Circle innerCir;
    Circle outterCir;
public:
    void Init(const int &x1, const int &y1,const int &rad1, const int &x2, const int &y2,const int &rad2 )
    {
        innerPos.Init(x1,y1);
        outterPos.Init(x2,y2);
        innerCir.Init(innerPos,rad1);
        outterCir.Init(outterPos,rad2);
    }
    void ShowRingInfo() const
    {
        cout<<"Inner Circle Info..."<<endl;
        innerCir.ShowPointInfo();
        cout<<"Outter Circle Info..."<<endl;
        outterCir.ShowPointInfo();
    }
};

int main(void)
{
    Ring ring;
    ring.Init(1, 1, 4, 2, 2, 9);
    ring.ShowRingInfo();
    
    return 0;
}