#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

#include "String.h"

class Account
{
private:
	int ID;
	int Money;
	String Name;
public:
	Account(int id, int money, String name);

	int GetAccID() const;
	virtual void Deposit(int money);
	int Withdraw(int money);
	void ShowAccInfo() const;

};
#endif // !__ACCOUNT_H__
