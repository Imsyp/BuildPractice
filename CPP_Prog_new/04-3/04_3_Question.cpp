#include <iostream>
using namespace std;

class Point
{
private:
    int xpos, ypos;
public:
    Point(int x, int y) 
        : xpos(x), ypos(y)
    {
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
    Circle(const int &x,const int &y, const int &r) 
        : cirmid(x, y), rad(r)
    {
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
    Circle innerCir;
    Circle outterCir;
public:
    Ring(const int &x1, const int &y1,const int &rad1, const int &x2, const int &y2,const int &rad2 )
        : innerCir(x1, y1, rad1), outterCir(x2, y2, rad2)
    {
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
    Ring ring(1, 1, 4, 2, 2, 9);
    ring.ShowRingInfo();
    
    return 0;
}