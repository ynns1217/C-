#include<iostream>
#include <cstring>
#include "Account.h"
using namespace  std;

Account::Account(int id, int money, char* name): ID(id),Money(money)				//생성자
{
	Name = new char[strlen(name) + 1];
	strcpy(Name, name);
}

Account::Account(const Account &ref):ID(ref.ID),Money(ref.Money)				//참조 생성자
{
	Name = new char[strlen(ref.Name) + 1];
	strcpy(Name, ref.Name);
}

int Account::GetAccID() const { return ID; }						//ID 반환

void Account::Deposit(int money) { Money += money; }				//입금

int Account::Withdraw(int money) { Money -= money; return money; }				//출금

void Account :: ShowAccInfo() const							//정보 출력
{
	cout << "계좌 : " << ID << endl;
	cout << " 금액 : " << Money << endl;
	cout << "이름 :" << Name << endl;
}

Account::~Account()
{
	delete[]Name;
}