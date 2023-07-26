#include <iostream>
#include <cstring>
using namespace std;

class String
{
private:
    char * str;
    int len;
public:
    String()  //디폴트 값 설정
    {
        len = 0;
        str = NULL;
    }
    String(const char * c)  //생성자의 오버로딩
    {
        len = strlen(c+1);
        str = new char[len];
        strcpy(str, c);
    }
    String(const String& ref)   //복사 생성자
    {
        len = strlen(ref.str);
        str = new char[len];
        strcpy(str, ref.str);
    }
    String& operator=(const String& ref)    //대입 연산자
    {
        delete []str;
        len = strlen(ref.str);
        str = new char[len];
        strcpy(str, ref.str);
        return *this;
    }
    String& operator+(const String& ref)    //+ 연산자
    {
        len = strlen(str);
        char * chr = new char[len+ref.len];
        strcpy(chr, str);
        strcat(chr, ref.str);
        String temp(chr);
        return temp;
    }
    String& operator+=(const String& ref)   //+=연산자
    {
        len = strlen(str);
        char * chr = new char[len+ref.len];
        strcpy(chr, str);
        strcat(chr, ref.str);
        str = chr;
        return *this;
    }

    bool operator==(const String& ref)  //==연산자
    {
        if(str == ref.str)
            return 1;
        else 
            return 0;
    }
    ~String()   //소멸자
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
        cout<<"동일 문자열!"<<endl;
    else
        cout<<"동일하지 않은 문자열!"<<endl;

    string str4;
    cout<<"문자열 입력: ";
    cin>>str4;
    cout<<"입력한 문자열: "<<str4<<endl;

    return 0;
}