#include "BankingCommonDecl.h"
#include "Account.h"
using namespace std;

Account::Account(int id, int money, String name): ID(id),Money(money)
{
	Name = name;
}

int Account::GetAccID() const { return ID; }

void Account::Deposit(int money)
{
	Money += money;
}

int Account::Withdraw(int money)
{
	if(Money<money)
		return 0;
		Money-=money;
		return money;
}

void Account::ShowAccInfo() const
{
	cout << "ID" << ID << endl;
	cout << "Name" << Name << endl;
	cout << "Money" << Money << endl;
}

