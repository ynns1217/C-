//BankingSystemVer02
//Accout 클래서 정의, 객체 프린터 배열 적용

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
		cout << "생성자" << endl;
		pname = new char[strlen(Pname) + 1];
		strcpy(Pname, pname);
	}

	void ibgeum(int amoney, int aID,char* pname)
	{
		cout << "========입금======" << endl;
		cout << "이름 :";
		cin >> pname;
		cout << "ID :";
		cin >> aID;
		cout << "입금할 금액을 입력하시오 :";
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
		cout << "========출금======" << endl;
		cout << "이름 :";
		cin >> pname;
		cout << "ID :";
		cin >> aID;
		cout << "입금할 금액을 입력하시오 :";
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
			cout << "이름 : " << AccArr[i]->Pname << endl;
			cout << "계좌 ID : " << AccArr[i]->ID << endl;
			cout << "남은 금액 : " << AccArr[i]->Money << endl;
			
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
	cout << "1. 계좌 등록" << endl;
	cout << "2. 입금" << endl;
	cout << "3. 출금" << endl;
	cout << "4. 모든 계좌 조회" << endl;
	cout << "5. 나가기" << endl;
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