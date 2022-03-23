#include<iostream>
using namespace std;
#pragma warning(disable:4996)

class Human
{
private:
	char* Name;
	int Age;
public:
	Human(const char* name, int age) :Age(age)
	{
		Name = new char[strlen(name) + 1];
		strcpy(Name, name);
	}

	Human(const Human&ref) :Age(ref.Age)
	{
		Name = new char[strlen(ref.Name) + 1];
		strcpy(Name, ref.Name);
	}

	void printHuman()
	{
		cout << "�̸��� " << Name <<"�̰�";
		cout << "���̴� " << Age <<"�� �Դϴ�." << endl;
	}

	~Human()
	{
		delete[]Name;
	}

	Human& operator=(const Human& ref) 
	{
		delete[]Name;

		Age = ref.Age;
		strcpy(Name, ref.Name);
		return *this;

		// �����Ҵ���ϰ� Name=ref.Name;�� ���ư�
	}
};



int main(void)
{
	Human man("�̼���", 50);
	man.printHuman();

	Human man1(man);
	man1.printHuman();

	Human xman = man;
	xman.printHuman();

}