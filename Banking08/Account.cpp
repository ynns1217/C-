#include "Account.h"
#include "BankingCommonDecl.h"

Account::Account(int id, int money, char* name) :ID(id), Money(money)		//»ý¼ºÀÚ
{
	Name = new char[strlen(name) + 1];
	strcpy(Name, name);
}

Account::Account(const Account& ref) : ID(ref.ID),Money(ref.Money)
{
	Name = new char[strlen(ref.Name) + 1];
	strcpy(Name, ref.Name);
}

Account& Account:: operator=(const Account& ref)
{
	ID = ref.ID;
	Money = ref.Money;
	Name = new char[strlen(ref.Name) + 1];
	strcpy(Name, ref.Name);

	return *this;
}

int Account::GetAccID() const
{
	return ID;
}

void Account:: Deposit(int money)
{
	Money += money;
}
int Account::Withdraw(int money)
{
	Money -= money;

	return money;
}
void Account:: ShowAccInfo()const
{
	cout << " [ID]" << ID << endl;
	cout << "[Money]" << Money << endl;
	cout << "[Name]" << Name << endl;
}
Account::~Account()
{
	delete[]Name;
}


