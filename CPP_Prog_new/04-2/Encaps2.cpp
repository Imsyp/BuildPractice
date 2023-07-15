#include <iostream>
using namespace std;

class SinivelCap //Äà¹° Ã³Ä¡¿ë Ä¸½¶
{
public:
    void Take() const {cout<<"Äà¹°ÀÌ ³´½À´Ï´Ù."<<endl;}
};

class SneezeCap // ÀçÃ¤±â Ã³Ä¡¿ë Ä¸½¶
{
public:
    void Take() const {cout<<"ÀçÃ¤±â°¡ ¸Ü½À´Ï´Ù."<<endl;}
};

class SnuffleCap // ÄÚ¸·Èû Ã³Ä¡¿ë Ä¸½¶
{
public:
    void Take() const {cout<<"ÄÚ°¡ ¶Õ¸³´Ï´Ù."<<endl;}
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