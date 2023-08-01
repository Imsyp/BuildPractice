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
    Car * pcar1=new Truck(80, 200);
    Truck * ptruck1=(Truck *)pcar1; //���� Ŭ������ ������ ���� ���� Ŭ������ ������ ������ �� ��ȯ�ϴ� ���� �Ϲ������� ����
    ptruck1 ->ShowTruckState();
    cout<<endl;

    Car * pcar2=new Car(120);
    Truck * ptruck2=(Truck *)pcar2; //�����Ͱ� ����Ű�� ��ü�� Car ��ü�̹Ƿ�, ������ �ִ� ����
    ptruck2 ->ShowTruckState();
    
    return 0;
}