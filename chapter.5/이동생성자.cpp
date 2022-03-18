#include <iostream>
#include <cstring>
using namespace std;
#pragma warning(disable:4996)


class Human
{
private:
	char name[20];
	int age;


public:
	Human(const char* name, int age)
	{		
		cout << "�Ϲ� ������ȣ�� " << endl;
		strcpy(this->name, name);
		this->age = age;

	}

	Human(const Human& copy)		//lvalue ����
	{
		cout << "��������� ȣ��" << endl;
		strcpy(this->name, copy.name);
		this ->age = copy.age;
	}

	Human(const Human&& move)		//rvalue ����
	{
		cout << "�̵������� ȣ��" << endl;
		strcpy(this->name, move.name);
		this->age = move.age;
	}

	void viewHuman()
	{
		cout << "�̸�:" << name << "," << "����:" << age << endl;
	}
};

int main()
{
	Human h1("ȫ���", 30);
	h1.viewHuman();


	Human h2(h1);			//��������ڰ� ����Ʈ�� �����ȴ�.
	h2.viewHuman();

	Human h3(move(h1));			//�̵� ������ȣ���ϱ����� lvalue�� rvalue�� �ٲ۴� move�Լ��� ����Ѵ�.
	h3.viewHuman();

	return 0;
}