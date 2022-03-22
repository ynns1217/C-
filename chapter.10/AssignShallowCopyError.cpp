#include <iostream>
#include <cstring>
using namespace std;
#pragma warning(disable:4996)
class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}

	//�������� ȣ�������� �߰�
	//�Ҹ����� ȣ��������� ���� ���簡 ������
	Person& operator=(const Person& ref)
	{
		delete[]name;
		int len = strlen(ref.name) + 1;
		name = new char[len];
		strcpy(name, ref.name);
		age = ref.age;

		return *this;
	}

	void ShowPersonInfo() const
	{
		cout << "�̸�:" << name << endl;
		cout << "����:" << age << endl;
	}
	~Person()
	{
		delete[] name;
		cout << "called destructor!" << endl;
	}
};

int main(void)
{
	Person man1("Lee dong woo", 29);
	Person man2("Yoon ji yul", 22);
	man2 = man1;
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}