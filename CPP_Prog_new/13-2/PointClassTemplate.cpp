#include <iostream>
using namespace std;

template <typename T>
class Point
{
private:   
    T xpos, ypos;
public:
    Point(T x=0, T y=0) : xpos(x), ypos(y)
    { }
    void ShowPosition() const
    {
        cout<<'['<<xpos<<", "<<ypos<<']'<<endl;
    }
};

int main(void)
{
    Point<int> pos1(3, 4);  //T를 int로 하여 만든 템플릿 클래스 Point<int>의 객체
    Point<double> pos2(2.4, 3.6);   //T를 double로 하여 만든 템플릿 클래스 Point<double>의 객체
    Point<char> pos3('P', 'F'); //좌표정보를 문자로 표시하는 상황의 표현

    pos1.ShowPosition();
    pos2.ShowPosition();
    pos3.ShowPosition();

    return 0;
}