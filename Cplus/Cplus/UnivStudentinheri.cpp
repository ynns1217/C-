//7�� ���
//�ڽ� Ŭ������ �θ� Ŭ������ ������� �ʱ�ȭ�� �ǹ��� �ִ�.
//�ڽ� Ŭ���� �����ڴ� �θ� Ŭ���� �����ڸ� ȣ���ؼ� �θ� Ŭ���� ����� �ʱ�ȭ�ϴ� ���� ����

#include <iostream>
#include <cstring>
using namespace std;
#pragma warning(disable:4996)

//�θ� Ŭ����
class Person
{
private:
	int age;
	char name[50];

public:
	Person(int myage, const char* myname) : age(myage)			
	{
		cout << "�θ� Ŭ���� ������" << endl;
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


//�ڽ� Ŭ����
class UnivStudent : public Person
{
private:
	char major[50];				//���� ����

public: 
	UnivStudent(const char* myname, int myage, const char* mymajor) : Person(myage, myname) 
		//�θ�Ŭ������ �ڽ�Ŭ������ ���
	{
		cout << "�ڽ� Ŭ���� ������" << endl;
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