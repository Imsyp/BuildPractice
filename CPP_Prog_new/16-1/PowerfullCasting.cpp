#include <iostream>
using namespace std;

class Car
{
private:
    int fuelGuage;
public:
    Car(int fuel) : fuelGuage(fuel)
    { }
    void ShowCarState() { cout<<"잔여 연료량: "<<fuelGuage<<endl; }
};

class Truck : public Car
{
private:
    int freightWeight;
public:
    Truck(int fuel, int weight) : Car(fuel), freightWeight(weight)
    { }
    void ShowTruckState()
    {
        ShowCarState();
        cout<<"화물의 무게: "<<freightWeight<<endl;
    }
};

int main(void)
{
    Car * pcar1=new Truck(80, 200);
    Truck * ptruck1=(Truck *)pcar1; //기초 클래스의 포인터 형을 유도 클래스의 포인터 형으로 형 변환하는 것은 일반적이지 않음
    ptruck1 ->ShowTruckState();
    cout<<endl;

    Car * pcar2=new Car(120);
    Truck * ptruck2=(Truck *)pcar2; //포인터가 가리키는 객체가 Car 객체이므로, 문제가 있는 문장
    ptruck2 ->ShowTruckState();
    
    return 0;
}