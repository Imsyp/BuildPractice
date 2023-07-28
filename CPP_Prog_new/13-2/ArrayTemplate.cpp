#include <iostream>
#include <cstdlib>
using namespace std;

class Point
{
private:
    int xpos, ypos;
public:
    Point(int x=0, int y=0) : xpos(x), ypos(y) { }
    friend ostream& operator<<(ostream& os, const Point& pos);
};

ostream& operator<<(ostream& os, const Point& pos)
{
    os<<'['<<pos.xpos<<", "<<pos.ypos<<']'<<endl;
    return os;
}


template <typename T>
class BoundCheckArray
{
private:
    T arr;
    T arrlen;

    BoundCheckArray(const BoundCheckArray& arr) { }
    BoundCheckArray& operator=(const BoundCheckArray& arr) { }

public:
    BoundCheckArray(int len) : arrlen(len)
    {
        arr = new T[len];   //저장의 대상이 포인터 객체의 주소이므로 POINT_PTR 배열 생성
    }
    T& operator[] (int idx) 
    {
        if(idx<0 || idx>=arrlen)
        {
            cout<<"Array index out of bound exception"<<endl;
            exit(1);
        }
        return arr[idx];
    }
    T operator[] (int idx) const
    {
        if(idx<0 || idx>=arrlen)
        {
            cout<<"Array index out of bound exception"<<endl;
            exit(1);
        }
        return arr[idx];
    }
    int GetArrayLen() const { return arrlen; }
    ~BoundCheckPointPtrArray() { delete []arr; }
};

int main(void)
{
    BoundCheckArray arr(3);
    arr[0] = new Point(3, 4);
    arr[1] = new Point(5, 6);
    arr[2] = new Point(7, 8);
    
    for(int i=0; i<arr.GetArrayLen(); i++)
        cout<<*(arr[i]);

    delete arr[0];
    delete arr[1];
    delete arr[2];
    
    return 0;
}