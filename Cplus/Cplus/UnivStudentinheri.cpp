//7장 상속
//자식 클래스는 부모 클래스의 멤버까지 초기화할 의무가 있다.
//자식 클래스 생성자는 부모 클래스 생성자를 호출해서 부모 클래스 멤버를 초기화하는 것이 좋다

#include <iostream>
#include <cstring>
using namespace std;
#pragma warning(disable:4996)

//부모 클래스
class Person
{
private:
	int age;
	char name[50];

public:
	Person(int myage, const char* myname) : age(myage)			
	{
		cout << "부모 클래스 생성자" << endl;
		strcpy(name, myname);
	}
	void WhatYourName() const
	{
		cout << " My name is" << name << endl;
	}
	void HowOldAreYou() const
	{
		cout << " I'm" << age << "yeaers old" << endl<<endl;
	}
};


//자식 클래스
class UnivStudent : public Person
{
private:
	char major[50];				//전공 과목

public: 
	UnivStudent(const char* myname, int myage, const char* mymajor) : Person(myage, myname) 
		//부모클래스를 자식클래스에 상속
	{
		cout << "자식 클래스 생성자" << endl;
		strcpy(major, mymajor);
	}

	void WhoAreYou() const
	{
		WhatYourName();
		HowOldAreYou();
		cout << "MY major is" << major << endl;
	}
};

int main(void)
{
	UnivStudent ustd1("Lee", 22, "Computer eng.");
	ustd1.WhoAreYou();

	UnivStudent ustd2("Yoon",21, "Electronic eng.");
	ustd2.WhoAreYou();


	return 0;
}