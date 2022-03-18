#include <iostream>
#include <cstring>
#pragma warning(disable:4996)
using namespace std;


//부모 클래스
class Person
{
private:
	char* name;
public:
	Person(const char* myname)				//이름 동적할당 생성자
	{
		name = new char [strlen(myname) + 1];
		strcpy(name, myname);
	}

	~Person()
	{
		delete[] name;
	}

	void WhatYourName() const 
	{
		cout << "제 이름은" << name << "입니다." << endl;
	}
};


//자식 클래스 (부모 클래스를 상속받은)
class UnivStudent : public Person
{
private:
	char* major;
public:
	UnivStudent(const char* myname, const char* mymajor) : Person(myname)
	{
		major = new char[strlen(mymajor) + 1];
		strcpy(major, mymajor);
	}

	~UnivStudent()
	{
		delete[]major;
	}

	void WhoAreYou() const 
	{
		cout << "제 전공은 " << major << "입니다." << endl << endl;
	}
};

int main(void)
{
	//Person p1("하연서");
	//p1.WhatYourName();

	UnivStudent p2("하연서","정보보안");
	p2.WhoAreYou();

	return 0;
}