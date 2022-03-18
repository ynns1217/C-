#include <iostream>
#include <cstring>
#pragma warning(disable:4996)
using namespace std;


//�θ� Ŭ����
class Person
{
private:
	char* name;
public:
	Person(const char* myname)				//�̸� �����Ҵ� ������
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
		cout << "�� �̸���" << name << "�Դϴ�." << endl;
	}
};


//�ڽ� Ŭ���� (�θ� Ŭ������ ��ӹ���)
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
		cout << "�� ������ " << major << "�Դϴ�." << endl << endl;
	}
};

int main(void)
{
	//Person p1("�Ͽ���");
	//p1.WhatYourName();

	UnivStudent p2("�Ͽ���","��������");
	p2.WhoAreYou();

	return 0;
}