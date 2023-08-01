#include <iostream>
using namespace std;

class Car
{
private:
    int fuelGuage;
public:
    Car(int fuel) : fuelGuage(fuel)
    { }
    void ShowCarState() { cout<<"�ܿ� ���ᷮ: "<<fuelGuage<<endl; }
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
        cout<<"ȭ���� ����: "<<freightWeight<<endl;
    }
};

int main(void)
{
    /*
    Car * pcar1=new Truck(80, 200);
    Truck * ptruck1=dynamic_cast<Truck*>(pcar1);    //compile error

    Car * pcar2=new Car(120);
    Truck * ptruck2=dynamic_cast<Truck*>(pcar2);    //compile error
    */

    Truck * ptruck3=new Truck(70, 150);
    Car * pcar3=dynamic_cast<Car*>(ptruck3);    //compile ok

    return 0;
}