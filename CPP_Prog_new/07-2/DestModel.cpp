#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
    char * name;
public:
    Person(char * myname)
    {
        name = new char[strlen(myname)+1];      // strlen은 문자열의 실제 길이가 아닌 문자열의 개수만 return -> 문자열 뒤 \0 포함하지 않음.
        strcpy(name, myname);
    }
    ~Person()
    {
        delete []name;
    }
    void WhatYourName() const
    {
        cout<<"My name is "<<name<<endl;
    }
};

class UnivStudent : public Person
{
private:
    char * major;
public:
    UnivStudent(char * myname, char * mymajor)
        : Person(myname)
    {
        major = new char[strlen(mymajor)+1];
        strcpy(major, mymajor);
    }
    ~UnivStudent()
    {
        delete []major;
    }
    void WhoAreYou() const
    {
        WhatYourName();
        cout<<"My name is "<<major<<endl<<endl;
    }
};

int main(void)
{
    UnivStudent st1("Kim", "Mathematics");
    st1.WhoAreYou();
    UnivStudent st2("Hong", "Physics");
    st2.WhoAreYou();
    
    return 0;
}