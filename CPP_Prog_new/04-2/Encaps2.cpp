#include <iostream>
using namespace std;

class SinivelCap //�๰ óġ�� ĸ��
{
public:
    void Take() const {cout<<"�๰�� �����ϴ�."<<endl;}
};

class SneezeCap // ��ä�� óġ�� ĸ��
{
public:
    void Take() const {cout<<"��ä�Ⱑ �ܽ��ϴ�."<<endl;}
};

class SnuffleCap // �ڸ��� óġ�� ĸ��
{
public:
    void Take() const {cout<<"�ڰ� �ո��ϴ�."<<endl;}
};

class Contact600
{
private:
    SinivelCap sin;
    SneezeCap sne;
    SnuffleCap snu;

public:
    void Take() const
    {
        sin.Take();
        sne.Take();
        snu.Take();
    }
};

class ColdPatient
{
public: 
    void TakeCONTACT600(const Contact600 &cap) const {cap.Take();}
};

int main(void)
{
    Contact600 cap;

    ColdPatient sufferer;
    sufferer.TakeCONTACT600(cap);

    return 0;
}