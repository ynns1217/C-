//일부 멤버함수를 const로 선언

#include <iostream>
#include<cstring>
#pragma warning(disable:4996)
using namespace std;

enum { Make = 1, ibgeum, chulgeum, all, exit };

class Account
{
private:
	int ID;
	int Money;
	char* Name;

public:
	Account(int ID, int money, char* name) :ID(ID), Money(money)
	{
		Name = new char[strlen(name + 1)];
		strcpy(Name, name);
	}

	Account(const Account& ref) :ID(ref.ID), Money(ref.Money)
	{
		Name = new char[strlen(ref.Name + 1)];
		strcpy(Name, ref.Name);
	}

	int GetID() { return ID; }
	void ibgeum(int money) { Money += money; }
	int chulgeum(int money) { Money -= money; return money; }

	void allPrint() {
		cout << "[ ID ]" << ID << endl;
		cout << "[ 금액 ]" << Money << endl;
		cout << "[ 이름 ]" << Name << endl;
	}

	~Account()
	{
		delete[]Name;
	}
};


