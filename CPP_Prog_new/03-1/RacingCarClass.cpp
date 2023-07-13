#include <iostream>
#include <cstring>
using namespace std;

namespace CAR_CONST
{
    enum
    {
        ID_LEN = 20,
        MAX_SPD = 200,
        FUEL_STEP = 2,
        ACC_STEP = 10,
        BRK_STEP = 10
    };
}

class Car // struct ��� class�� ����
{
private: // �Ʒ� ������ �Լ��� ��� Ŭ���� ����(Ŭ���� ���� ���ǵ� �Լ�)������ ���� ����
    char gamerID[CAR_CONST::ID_LEN]; 
    int fuelGauge; 
    int curSpeed; 
public: // �Ʒ� ������ �Լ��� ���� ���� ���� ����
    void InitMembers(char * ID, int fuel);
    void ShowCarState();
    void Accel();
    void Break();

};

void Car::InitMembers(char * ID, int fuel) // ���� Ŭ���� ������ ����� �Լ��̱� ������ private ������ ���� ����
{
    strcpy(gamerID, ID);
    fuelGauge=fuel;
    curSpeed=0;
}

void Car::ShowCarState()
{
    cout<<"������ ID: "<<gamerID<<endl;
    cout<<"���ᷮ: "<<fuelGauge<<"%"<<endl;
    cout<<"����ӵ�: "<<curSpeed<<"km/s"<<endl;
}

void Car::Accel()
{
    if (fuelGauge <= 0)
        return;
    else
        fuelGauge -= CAR_CONST::FUEL_STEP;

    if (curSpeed + CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPD)
    {
        curSpeed = CAR_CONST::MAX_SPD;
        return;
    }

    curSpeed += CAR_CONST::ACC_STEP;
}

void Car::Break()
{
    if (curSpeed < CAR_CONST::BRK_STEP)
    {
        curSpeed = 0;
        return;
    }

    curSpeed -= CAR_CONST::BRK_STEP;
}

int main(void)
{
    Car run99;
    run99.InitMembers("run99", 100); // public���� ����� �Լ��̱� ������ Ŭ���� �ܺο����� ȣ�� ����
    run99.Accel();
    run99.Accel();
    run99.Accel();
    run99.ShowCarState();
    run99.Break();
    run99.ShowCarState();

    return 0;
}

