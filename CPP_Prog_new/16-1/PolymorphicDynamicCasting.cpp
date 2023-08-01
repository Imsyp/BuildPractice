#include <iostream>
using namespace std;

class SoSimple  //Polymorphic 클래스
{
public:
    virtual void ShowSimpleInfo()
    {
        cout<<"SoSimple Base Class"<<endl;
    }
};

class SoComplex : public SoSimple
{
public:
    void ShowSimpleInfo()   //이것 역시 가상함수
    {
        cout<<"SoComplex Derived Class"<<endl;
    }
};

int main(void)
{
    SoSimple * simPtr=new SoComplex;
    SoComplex * comPtr=dynamic_cast<SoComplex*>(simPtr);    //기초 클래스인 SoSimple형 포인터 변수 simPtr을 유도 클래스인 SoComplex형 포인터로 형 변환
    comPtr->ShowSimpleInfo();
    
    return 0;
}
