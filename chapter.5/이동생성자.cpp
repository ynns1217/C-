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
		strcpy(this->name, name);
		this->age = age;
		cout << "������ȣ�� " << endl;
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

	return 0;
}