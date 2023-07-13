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

class Car // struct 대신 class를 삽입
{
private: // 아래 변수와 함수는 모두 클래스 내부(클래스 내에 정의된 함수)에서만 접근 가능
    char gamerID[CAR_CONST::ID_LEN]; 
    int fuelGauge; 
    int curSpeed; 
public: // 아래 변수와 함수는 제한 없이 접근 가능
    void InitMembers(char * ID, int fuel);
    void ShowCarState();
    void Accel();
    void Break();

};

void Car::InitMembers(char * ID, int fuel) // 동일 클래스 내에서 선언된 함수이기 때문에 private 변수에 접근 가능
{
    strcpy(gamerID, ID);
    fuelGauge=fuel;
    curSpeed=0;
}

void Car::ShowCarState()
{
    cout<<"소유자 ID: "<<gamerID<<endl;
    cout<<"연료량: "<<fuelGauge<<"%"<<endl;
    cout<<"현재속도: "<<curSpeed<<"km/s"<<endl;
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
    run99.InitMembers("run99", 100); // public에서 선언된 함수이기 때문에 클래스 외부에서도 호출 가능
    run99.Accel();
    run99.Accel();
    run99.Accel();
    run99.ShowCarState();
    run99.Break();
    run99.ShowCarState();

    return 0;
}

