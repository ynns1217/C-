//BankingSystemVer02
//Accout Ŭ���� ����, ��ü ������ �迭 ����

#include<iostream>
#include<cstring>
using namespace std;

enum { Make = 1,ibgeum,chulgeum,all,exit };
Account* AccArr[1000];
int AccNum = 0;

class Account
{
private:
	int Money;
	int ID;
	char* Pname;

public:
	Account(int amoney, int aID, char* pname) : Money(amoney), ID(aID)
	{
		cout << "������" << endl;
		pname = new char[strlen(Pname) + 1];
		strcpy(Pname, pname);
	}

	void ibgeum(int amoney, int aID,char* pname)
	{
		cout << "========�Ա�======" << endl;
		cout << "�̸� :";
		cin >> pname;
		cout << "ID :";
		cin >> aID;
		cout << "�Ա��� �ݾ��� �Է��Ͻÿ� :";
		cin >> amoney;

		for (int i = 0; i < 1000; i++)
		{
			if (AccArr[i]->Pname == pname)
			{
				AccArr[i]->Money += amoney;
			}
		}

	}

	int chulgeum(int amoney, int aID, char* pname)
	{
		cout << "========���======" << endl;
		cout << "�̸� :";
		cin >> pname;
		cout << "ID :";
		cin >> aID;
		cout << "�Ա��� �ݾ��� �Է��Ͻÿ� :";
		cin >> amoney;
		for (int i = 0; i < 1000; i++)
		{
			if (AccArr[i]->Pname == pname)
			{
				AccArr[i]->Money -= amoney;
			}
		}
	}

	void print_all()
	{
		for (int i = 0; i < 1000; i++)
		{
			cout << "�̸� : " << AccArr[i]->Pname << endl;
			cout << "���� ID : " << AccArr[i]->ID << endl;
			cout << "���� �ݾ� : " << AccArr[i]->Money << endl;
			
		}
	}
	

	~Account()
	{
		delete[]Pname;
	}
};

void print()
{
	int option;
	cout << "1. ���� ���" << endl;
	cout << "2. �Ա�" << endl;
	cout << "3. ���" << endl;
	cout << "4. ��� ���� ��ȸ" << endl;
	cout << "5. ������" << endl;
	cin >> option;

	if (option == 1)
	{
	}
	else if (option == 2)
	{

	}
}

int main(void)
{
	while (1)
	{
		print();
	}
}