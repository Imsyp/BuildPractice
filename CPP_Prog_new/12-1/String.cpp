#include <iostream>
#include <cstring>
using namespace std;

class String
{
private:
    char * str;
    int len;
public:
    String()  //����Ʈ �� ����
    {
        len = 0;
        str = NULL;
    }
    String(const char * c)  //�������� �����ε�
    {
        len = strlen(c+1);
        str = new char[len];
        strcpy(str, c);
    }
    String(const String& ref)   //���� ������
    {
        len = strlen(ref.str);
        str = new char[len];
        strcpy(str, ref.str);
    }
    String& operator=(const String& ref)    //���� ������
    {
        delete []str;
        len = strlen(ref.str);
        str = new char[len];
        strcpy(str, ref.str);
        return *this;
    }
    String& operator+(const String& ref)    //+ ������
    {
        len = strlen(str);
        char * chr = new char[len+ref.len];
        strcpy(chr, str);
        strcat(chr, ref.str);
        String temp(chr);
        return temp;
    }
    String& operator+=(const String& ref)   //+=������
    {
        len = strlen(str);
        char * chr = new char[len+ref.len];
        strcpy(chr, str);
        strcat(chr, ref.str);
        str = chr;
        return *this;
    }

    bool operator==(const String& ref)  //==������
    {
        if(str == ref.str)
            return 1;
        else 
            return 0;
    }
    ~String()   //�Ҹ���
    {
        delete []str;
    }
    friend ostream& operator<<(ostream&,const String&);
    friend istream& operator>>(istream&,const String&);
};

ostream& operator<<(ostream& os,const String& ref)
{
    os<<ref.str<<endl;
    return os;
}

istream& operator>>(istream& is,const String& ref)
{
    is>>ref.str;
    return is;
}

int main(void)
{
    string str1="I like ";
    string str2="string class ";
    string str3=str1+str2;

    cout<<str1<<endl;
    cout<<str2<<endl;
    cout<<str3<<endl;

    str1+=str2;
    if(str1==str3)
        cout<<"���� ���ڿ�!"<<endl;
    else
        cout<<"�������� ���� ���ڿ�!"<<endl;

    string str4;
    cout<<"���ڿ� �Է�: ";
    cin>>str4;
    cout<<"�Է��� ���ڿ�: "<<str4<<endl;

    return 0;
}